package helpers

import (
	"time"
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