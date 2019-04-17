package helpers

import (
	"time"
	pb "github.com/golang/protobuf/proto"
)

func SumDurations(durations []time.Duration) (time.Duration) {
	var sum time.Duration;
	for _, duration := range durations {
		sum += duration;
	}
	return sum;
}

func FilterWarmups(durations []time.Duration, warmup_iterations int) ([]time.Duration) {
	return durations[warmup_iterations:]
}

func Pack(message pb.Message) []byte {
	bytes, err := pb.Marshal(message)
	if err != nil {
		panic(err)
	}
	return bytes
}