package test

func Serialize(iterations int, warmup_iterations int) {
	vanilla := createVanilla()
	pgv := createPGV()
	testSerialize(iterations, warmup_iterations, pgv, "PGV")
	testSerialize(iterations, warmup_iterations, vanilla, "Vanilla")
}
