package measure

import (
	"GPB-Perfy/pgv"
	"github.com/golang/protobuf/proto"
	"time"
)

func ValidateInt64Range(message *pgv.RepeatedInt64Range) time.Duration {
	startTime := time.Now()
	err := message.Validate()
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime
}

func Serialize(message proto.Message) time.Duration {
	startTime := time.Now()
	_, err := proto.Marshal(message)
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime
}

func RepeatedSerialize(message proto.Message, iterations int) []time.Duration {
	var rElapsedTimes []time.Duration
	for i := 0; i < iterations; i++ {
		elapsedTime := Serialize(message)
		rElapsedTimes = append(rElapsedTimes, elapsedTime)
	}
	return rElapsedTimes
}

func Deserialize(bytes []byte, message proto.Message) time.Duration {
	startTime := time.Now()
	err := proto.Unmarshal(bytes, message)
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime
}

func RepeatedDeserialize(bytes []byte, message proto.Message, iterations int) []time.Duration {
	var rElapsedTimes []time.Duration
	for i := 0; i < iterations; i++ {
		elapsedTime := Deserialize(bytes, message)
		rElapsedTimes = append(rElapsedTimes, elapsedTime)
	}
	return rElapsedTimes
}

func RepeatedValidatePerson(message *pgv.Person, iterations int) []time.Duration {
	var rElapsedTimes []time.Duration
	for i := 0; i < iterations; i++ {
		elapsedTime := ValidatePerson(message)
		rElapsedTimes = append(rElapsedTimes, elapsedTime)
	}
	return rElapsedTimes
}

func ValidatePerson(message *pgv.Person) time.Duration {
	startTime := time.Now()
	message.Validate()
	elapsedTime := time.Since(startTime)
	return elapsedTime
}

func ValidateParent(message *pgv.Parent) time.Duration {
	startTime := time.Now()
	message.Validate()
	elapsedTime := time.Since(startTime)
	return elapsedTime
}