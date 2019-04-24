package test

func Deserialize(iterations int, warmup_iterations int) {
	vanilla := createVanilla()
	pgv := createPGV()
	testDeserialize(iterations, warmup_iterations, pgv, "PGV")
	testDeserialize(iterations, warmup_iterations, vanilla, "Vanilla")
}