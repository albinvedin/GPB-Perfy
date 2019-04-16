package log

import (
    golog "log"
    "os"
    "strings"
)

type Logger struct {
    Info     *golog.Logger
    Error    *golog.Logger
    Debug    *golog.Logger
    FatalLog *golog.Logger
}

var logFile *os.File
var log Logger

func Init(fileName string) {
    if len(strings.TrimSpace(fileName)) == 0 {
        golog.Fatalf("Filename required!")
    }

    var err error
    logFile, err = os.OpenFile(fileName, os.O_RDWR|os.O_CREATE|os.O_APPEND, 0666)
    if err != nil {
        golog.Fatalf("Error opening file: %v", err)
    }

    log.Info = golog.New(logFile, "INFO  ", golog.LstdFlags | golog.Lmicroseconds)
    log.Error = golog.New(logFile, "ERROR ", golog.LstdFlags | golog.Lmicroseconds)
    log.Debug = golog.New(logFile, "DEBUG ", golog.LstdFlags | golog.Lmicroseconds)
    log.FatalLog = golog.New(logFile, "FATAL ", golog.LstdFlags | golog.Lmicroseconds)
}

func Fatalf(format string, args ...interface{}) {
    log.FatalLog.Printf(format, args...)
    golog.Fatalf(format, args...)
}

func Fatal(message string) {
    Fatalf(message)
}

func Infof(format string, args ...interface{}) {
    log.Info.Printf(format, args...)
    golog.Printf(format, args...)
}

func Info(message string) {
    Infof(message)
}

func Errorf(format string, args ...interface{}) {
    log.Error.Printf(format, args...)
    golog.Printf(format, args...)
}

func Error(message string) {
    Errorf(message)
}

func Debugf(format string, args ...interface{}) {
    log.Debug.Printf(format, args...)
    golog.Printf(format, args...)
}

func Debug(message string) {
    Debugf(message)
}