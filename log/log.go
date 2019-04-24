package log

import (
	"log"
	"os"
	"strings"
)

type Logger struct {
	Info     *log.Logger
	Error    *log.Logger
	Debug    *log.Logger
	FatalLog *log.Logger
}

func Create(path string) *Logger {
	var logger Logger
	var output *os.File

	if len(strings.TrimSpace(path)) == 0 {
		output = os.Stdout
	} else {
		var err error
		output, err = os.OpenFile(path, os.O_RDWR|os.O_CREATE|os.O_APPEND, 0666)
		if err != nil {
			panic(err)
		}
	}

	logger.Info = log.New(output, "INFO  ", log.LstdFlags|log.Lmicroseconds)
	logger.Error = log.New(output, "ERROR ", log.LstdFlags|log.Lmicroseconds)
	logger.Debug = log.New(output, "DEBUG ", log.LstdFlags|log.Lmicroseconds)
	logger.FatalLog = log.New(output, "FATAL ", log.LstdFlags|log.Lmicroseconds)

	return &logger
}
