package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	iterations, _ := strconv.Atoi(os.Args[1])
	warmup, _ := strconv.Atoi(os.Args[2])
	elementCount, _ := strconv.Atoi(os.Args[3])
	output := "x"
	fmt.Println(string(output))
}