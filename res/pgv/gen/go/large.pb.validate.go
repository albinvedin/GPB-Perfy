// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: large.proto

package pgv

import (
	"bytes"
	"errors"
	"fmt"
	"net"
	"net/mail"
	"net/url"
	"regexp"
	"strings"
	"time"
	"unicode/utf8"

	"github.com/golang/protobuf/ptypes"
)

// ensure the imports are used
var (
	_ = bytes.MinRead
	_ = errors.New("")
	_ = fmt.Print
	_ = utf8.UTFMax
	_ = (*regexp.Regexp)(nil)
	_ = (*strings.Reader)(nil)
	_ = net.IPv4len
	_ = time.Duration(0)
	_ = (*url.URL)(nil)
	_ = (*mail.Address)(nil)
	_ = ptypes.DynamicAny{}
)

// Validate checks the field values on Large with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *Large) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetField1(); val <= 0 || val > 10 {
		return LargeValidationError{
			field:  "Field1",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField2(); val <= 0 || val > 10 {
		return LargeValidationError{
			field:  "Field2",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField3(); val <= 0 || val > 10 {
		return LargeValidationError{
			field:  "Field3",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField4(); val <= 0 || val > 10 {
		return LargeValidationError{
			field:  "Field4",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField5(); val <= 0 || val > 10 {
		return LargeValidationError{
			field:  "Field5",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField6(); val <= 10 || val > 50 {
		return LargeValidationError{
			field:  "Field6",
			reason: "value must be inside range (10, 50]",
		}
	}

	if val := m.GetField7(); val <= 10 || val > 50 {
		return LargeValidationError{
			field:  "Field7",
			reason: "value must be inside range (10, 50]",
		}
	}

	if val := m.GetField8(); val <= 10 || val > 50 {
		return LargeValidationError{
			field:  "Field8",
			reason: "value must be inside range (10, 50]",
		}
	}

	if val := m.GetField9(); val <= 10 || val > 50 {
		return LargeValidationError{
			field:  "Field9",
			reason: "value must be inside range (10, 50]",
		}
	}

	if val := m.GetField10(); val <= 10 || val > 50 {
		return LargeValidationError{
			field:  "Field10",
			reason: "value must be inside range (10, 50]",
		}
	}

	if val := m.GetField11(); val <= 5 || val > 15 {
		return LargeValidationError{
			field:  "Field11",
			reason: "value must be inside range (5, 15]",
		}
	}

	if val := m.GetField12(); val <= 5 || val > 15 {
		return LargeValidationError{
			field:  "Field12",
			reason: "value must be inside range (5, 15]",
		}
	}

	if val := m.GetField13(); val <= 5 || val > 15 {
		return LargeValidationError{
			field:  "Field13",
			reason: "value must be inside range (5, 15]",
		}
	}

	if val := m.GetField14(); val <= 5 || val > 15 {
		return LargeValidationError{
			field:  "Field14",
			reason: "value must be inside range (5, 15]",
		}
	}

	if val := m.GetField15(); val <= 5 || val > 15 {
		return LargeValidationError{
			field:  "Field15",
			reason: "value must be inside range (5, 15]",
		}
	}

	if val := m.GetField16(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field16",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField17(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field17",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField18(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field18",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField19(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field19",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField20(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field20",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField21(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field21",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField22(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field22",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField23(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field23",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField24(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field24",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField25(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field25",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField26(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field26",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField27(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field27",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField28(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field28",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField29(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field29",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField30(); val <= 5 || val > 100 {
		return LargeValidationError{
			field:  "Field30",
			reason: "value must be inside range (5, 100]",
		}
	}

	if val := m.GetField31(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field31",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField32(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field32",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField33(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field33",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField34(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field34",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField35(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field35",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField36(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field36",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField37(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field37",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField38(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field38",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField39(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field39",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField40(); val <= 20 || val > 2500000000 {
		return LargeValidationError{
			field:  "Field40",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if v, ok := interface{}(m.GetField41()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field41",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField42()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field42",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField43()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field43",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField44()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field44",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField45()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field45",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField46()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field46",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField47()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field47",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField48()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field48",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField49()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field49",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField50()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field50",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if len(m.GetField51()) > 10 {
		return LargeValidationError{
			field:  "Field51",
			reason: "value length must be at most 10 bytes",
		}
	}

	if len(m.GetField52()) > 20 {
		return LargeValidationError{
			field:  "Field52",
			reason: "value length must be at most 20 bytes",
		}
	}

	if len(m.GetField53()) > 30 {
		return LargeValidationError{
			field:  "Field53",
			reason: "value length must be at most 30 bytes",
		}
	}

	if len(m.GetField54()) > 40 {
		return LargeValidationError{
			field:  "Field54",
			reason: "value length must be at most 40 bytes",
		}
	}

	if len(m.GetField55()) > 50 {
		return LargeValidationError{
			field:  "Field55",
			reason: "value length must be at most 50 bytes",
		}
	}

	if v, ok := interface{}(m.GetField61()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field61",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField62()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field62",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField63()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field63",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField64()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field64",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField65()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field65",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField66()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field66",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField67()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field67",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField68()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field68",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField69()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field69",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField70()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return LargeValidationError{
				field:  "Field70",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if val := m.GetField101(); val <= -100 || val > 100 {
		return LargeValidationError{
			field:  "Field101",
			reason: "value must be inside range (-100, 100]",
		}
	}

	if val := m.GetField102(); val <= -100 || val > 100 {
		return LargeValidationError{
			field:  "Field102",
			reason: "value must be inside range (-100, 100]",
		}
	}

	if val := m.GetField103(); val <= -100 || val > 100 {
		return LargeValidationError{
			field:  "Field103",
			reason: "value must be inside range (-100, 100]",
		}
	}

	if val := m.GetField104(); val <= -100 || val > 100 {
		return LargeValidationError{
			field:  "Field104",
			reason: "value must be inside range (-100, 100]",
		}
	}

	if val := m.GetField105(); val <= -100 || val > 100 {
		return LargeValidationError{
			field:  "Field105",
			reason: "value must be inside range (-100, 100]",
		}
	}

	return nil
}

// LargeValidationError is the validation error returned by Large.Validate if
// the designated constraints aren't met.
type LargeValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e LargeValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e LargeValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e LargeValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e LargeValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e LargeValidationError) ErrorName() string { return "LargeValidationError" }

// Error satisfies the builtin error interface
func (e LargeValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sLarge.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = LargeValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = LargeValidationError{}
