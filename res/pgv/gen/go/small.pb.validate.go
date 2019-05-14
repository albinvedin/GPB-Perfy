// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: small.proto

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

// Validate checks the field values on Small with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *Small) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetField1(); val <= 0 || val > 10 {
		return SmallValidationError{
			field:  "Field1",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField2(); val <= 0 || val > 10 {
		return SmallValidationError{
			field:  "Field2",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField3(); val <= 0 || val > 10 {
		return SmallValidationError{
			field:  "Field3",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField4(); val <= 0 || val > 10 {
		return SmallValidationError{
			field:  "Field4",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField5(); val <= 0 || val > 10 {
		return SmallValidationError{
			field:  "Field5",
			reason: "value must be inside range (0, 10]",
		}
	}

	if val := m.GetField6(); val <= 0 || val > 50 {
		return SmallValidationError{
			field:  "Field6",
			reason: "value must be inside range (0, 50]",
		}
	}

	if val := m.GetField7(); val <= 0 || val > 50 {
		return SmallValidationError{
			field:  "Field7",
			reason: "value must be inside range (0, 50]",
		}
	}

	if val := m.GetField8(); val <= 0 || val > 50 {
		return SmallValidationError{
			field:  "Field8",
			reason: "value must be inside range (0, 50]",
		}
	}

	if val := m.GetField9(); val <= 0 || val > 50 {
		return SmallValidationError{
			field:  "Field9",
			reason: "value must be inside range (0, 50]",
		}
	}

	if val := m.GetField10(); val <= 0 || val > 50 {
		return SmallValidationError{
			field:  "Field10",
			reason: "value must be inside range (0, 50]",
		}
	}

	if val := m.GetField31(); val <= 20 || val > 2500000000 {
		return SmallValidationError{
			field:  "Field31",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if val := m.GetField32(); val <= 20 || val > 2500000000 {
		return SmallValidationError{
			field:  "Field32",
			reason: "value must be inside range (20, 2500000000]",
		}
	}

	if v, ok := interface{}(m.GetField41()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return SmallValidationError{
				field:  "Field41",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField42()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return SmallValidationError{
				field:  "Field42",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField43()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return SmallValidationError{
				field:  "Field43",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField44()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return SmallValidationError{
				field:  "Field44",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField45()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return SmallValidationError{
				field:  "Field45",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if len(m.GetField51()) > 10 {
		return SmallValidationError{
			field:  "Field51",
			reason: "value length must be at most 10 bytes",
		}
	}

	if val := m.GetField101(); val <= -100 || val > 100 {
		return SmallValidationError{
			field:  "Field101",
			reason: "value must be inside range (-100, 100]",
		}
	}

	return nil
}

// SmallValidationError is the validation error returned by Small.Validate if
// the designated constraints aren't met.
type SmallValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e SmallValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e SmallValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e SmallValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e SmallValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e SmallValidationError) ErrorName() string { return "SmallValidationError" }

// Error satisfies the builtin error interface
func (e SmallValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sSmall.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = SmallValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = SmallValidationError{}
