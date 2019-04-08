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