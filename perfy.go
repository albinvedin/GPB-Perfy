package main

import (
	gm "GPB-Perfy/generated/person"
	sm "GPB-Perfy/static/person"
	pb "github.com/golang/protobuf/proto"
	measure "GPB-Perfy/measure"
	helpers "GPB-Perfy/helpers"
	"strconv"
	"log"
	"os"
	"math"
) 

func BadArguments() {
	log.Fatal("Usage: EXECUTABLE ITERATIONS(int) WARMUP(int)")
}

func main() {
	times, warmup, fileName := handleArgs()

	f, err := os.OpenFile(fileName, os.O_RDWR | os.O_CREATE | os.O_APPEND, 0666)
	if err != nil {
		log.Fatalf("Error opening file: %v\n", err)
	}
	defer f.Close()

	log.SetOutput(f)
	log.SetFlags(log.LstdFlags | log.Lmicroseconds)

	log.Println("START")
	log.Println("Iterations: " + strconv.Itoa(times))
	log.Println("Warmup: " + strconv.Itoa(warmup))
	testValidated(times, warmup, "PGV")
	//testBasic(times, warmup, "Raw")
	log.Println("END")
}

func handleArgs() (int, int, string) {
	args := os.Args[1:]

	times, err := strconv.Atoi(args[0])
	if err != nil {
		BadArguments()
	}

	var warmup int
	if len(args) > 1 {
		casted, err := strconv.Atoi(args[1])
		if err != nil {
			BadArguments()
		}
		warmup = casted
	} else {
		warmup = int(math.Min(float64(times / 10), 1000))
	}


	fileName := "perfy.log"

	return times, warmup, fileName
}

func testValidated(iterations int, warmup_iterations int, version string) {
	log.Println(version + ": STARTING")

	p := new(gm.Person)
	p.Id = 1000
	p.Name = "John Doe"
	p.Email = "john.doe@example.com"

	{
		iBytes, err := pb.Marshal(p)
		if err != nil {
			panic(err)
		}
		log.Println("Start measure decoding");
		measure.MeasureRepeatedDecode(iBytes, new(gm.Person), warmup_iterations);
		rElapsedTimes := measure.MeasureRepeatedDecode(iBytes, new(gm.Person), iterations);
		log.Println("Stop measure encoding, results:");
		log.Printf("Total duration: %s\n", helpers.SumDurations(rElapsedTimes));
	}

	s := new(sm.Person)
	s.Id = 1000
	s.Name = "John Doe"
	s.Email = "john.doe@example.com"

	{
		iBytes, err := pb.Marshal(s)
		if err != nil {
			panic(err)
		}
		log.Println("Start measure decoding");
		measure.MeasureRepeatedDecode(iBytes, new(sm.Person), warmup_iterations);
		rElapsedTimes := measure.MeasureRepeatedDecode(iBytes, new(sm.Person), iterations);
		log.Println("Stop measure encoding, results:");
		log.Printf("Total duration: %s\n", helpers.SumDurations(rElapsedTimes));
	}
}