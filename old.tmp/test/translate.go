package test

import (
	"GPB-Perfy/helpers"
	"GPB-Perfy/log"
	"GPB-Perfy/measure"
	"github.com/golang/protobuf/proto"
)

func testSerialize(iterations int, warmup_iterations int, message proto.Message, version string) {
	rElapsedTimes := measure.RepeatedSerialize(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Serialize (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}

func testDeserialize(iterations int, warmup_iterations int, message proto.Message, version string) {
	bytes := helpers.Marshal(message)
	rElapsedTimes := measure.RepeatedDeserialize(bytes, message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Deserialize (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}
