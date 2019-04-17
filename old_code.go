package main
/*
func testPGV(iterations int, warmup_iterations int) {
	message := new(gm.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testEncoding(iterations, warmup_iterations, message, "PGV")
	testDecoding(iterations, warmup_iterations, message, "PGV")
}

func testRaw(iterations int, warmup_iterations int) {
	message := new(sm.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testEncoding(iterations, warmup_iterations, message, "Raw")
	testDecoding(iterations, warmup_iterations, message, "Raw")
}

func testEncoding(iterations int, warmup_iterations int, message pb.Message, version string) {
	rElapsedTimes := measure.MeasureRepeatedEncode(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Encoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}

func testDecoding(iterations int, warmup_iterations int, message pb.Message, version string) {
	bytes := helpers.Pack(message)
	rElapsedTimes := measure.MeasureRepeatedDecode(bytes, message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Decoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}

*/

/*
func testPGVEncoding(iterations int, warmup_iterations int, message *gm.Person) {
	rElapsedTimes := measure.MeasureRepeatedEncode(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Encoding (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}

func testPGVDecoding(iterations int, warmup_iterations int, message *gm.Person) {
	bytes, err := pb.Marshal(message)
	if err != nil {
		panic(err)
	}
	rElapsedTimes := measure.MeasureRepeatedDecode(bytes, message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Decoding (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}
*/

/*
func testRawEncoding(iterations int, warmup_iterations int, message *sm.Person) {
	rElapsedTimes := measure.MeasureRepeatedEncode(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Encoding (%s) - Duration: %s\n", "Raw", helpers.SumDurations(filtered))
}

func testRawDecoding(iterations int, warmup_iterations int, message *sm.Person) {
	bytes, err := pb.Marshal(message)
	if err != nil {
		panic(err)
	}
	rElapsedTimes := measure.MeasureRepeatedDecode(bytes, message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Decoding (%s) - Duration: %s\n", "Raw", helpers.SumDurations(filtered))
}
*/

/*
func testPGV(iterations int, warmup_iterations int, version string) {
	p := new(gm.Person)
	p.Id = 1000
	p.Name = "John Doe"
	p.Email = "john.doe@example.com"

	{
		rElapsedTimes := measure.MeasureRepeatedEncode(p, iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Encoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}

	{
		bytes, err := pb.Marshal(p)
		if err != nil {
			panic(err)
		}
		measure.MeasureRepeatedDecode(bytes, new(gm.Person), warmup_iterations)
		rElapsedTimes := measure.MeasureRepeatedDecode(bytes, new(gm.Person), iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Decoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}
}


func testRaw(iterations int, warmup_iterations int, version string) {
	p := new(sm.Person)
	p.Id = 1000
	p.Name = "John Doe"
	p.Email = "john.doe@example.com"

	{
		rElapsedTimes := measure.MeasureRepeatedEncode(p, iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Encoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}

	{
		bytes, err := pb.Marshal(p)
		if err != nil {
			panic(err)
		}
		measure.MeasureRepeatedDecode(bytes, new(gm.Person), warmup_iterations)
		rElapsedTimes := measure.MeasureRepeatedDecode(bytes, new(gm.Person), iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Decoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}
}
*/