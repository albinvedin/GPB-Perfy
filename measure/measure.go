package measure

import (
	pb "github.com/golang/protobuf/proto"
	"time"
) 

func MeasureEncode(message pb.Message) (time.Duration) {
	startTime := time.Now();
	_, err := pb.Marshal(message);
	elapsedTime := time.Since(startTime);
	if (err != nil) {
		panic(err);
	}
	return elapsedTime;
}

func MeasureRepeatedEncode(message pb.Message, iterations int) ([]time.Duration) {
	var rElapsedTimes []time.Duration;
	for i := 0; i < iterations; i++ {
		elapsedTime := MeasureEncode(message);
		rElapsedTimes = append(rElapsedTimes, elapsedTime);
	}
	return rElapsedTimes;
}

func MeasureDecode(bytes []byte, message pb.Message) (time.Duration) {
	startTime := time.Now();
	err := pb.Unmarshal(bytes, message)
	elapsedTime := time.Since(startTime);
	if (err != nil) {
		panic(err);
	}
	return elapsedTime;
}

func MeasureRepeatedDecode(bytes []byte, message pb.Message, iterations int) []time.Duration {
	var rElapsedTimes []time.Duration;
	for i := 0; i < iterations; i++ {
		elapsedTime := MeasureDecode(bytes, message);
		rElapsedTimes = append(rElapsedTimes, elapsedTime);
	}
	return rElapsedTimes;
}