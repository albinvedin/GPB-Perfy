// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: double.proto

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

// Validate checks the field values on DoubleRangeGreaterThan with the rules
// defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *DoubleRangeGreaterThan) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if item <= 100 {
			return DoubleRangeGreaterThanValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value must be greater than 100",
			}
		}

	}

	return nil
}

// DoubleRangeGreaterThanValidationError is the validation error returned by
// DoubleRangeGreaterThan.Validate if the designated constraints aren't met.
type DoubleRangeGreaterThanValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e DoubleRangeGreaterThanValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e DoubleRangeGreaterThanValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e DoubleRangeGreaterThanValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e DoubleRangeGreaterThanValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e DoubleRangeGreaterThanValidationError) ErrorName() string {
	return "DoubleRangeGreaterThanValidationError"
}

// Error satisfies the builtin error interface
func (e DoubleRangeGreaterThanValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sDoubleRangeGreaterThan.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = DoubleRangeGreaterThanValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = DoubleRangeGreaterThanValidationError{}

// Validate checks the field values on DoubleRangeLessThan with the rules
// defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *DoubleRangeLessThan) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if item >= 100 {
			return DoubleRangeLessThanValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value must be less than 100",
			}
		}

	}

	return nil
}

// DoubleRangeLessThanValidationError is the validation error returned by
// DoubleRangeLessThan.Validate if the designated constraints aren't met.
type DoubleRangeLessThanValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e DoubleRangeLessThanValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e DoubleRangeLessThanValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e DoubleRangeLessThanValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e DoubleRangeLessThanValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e DoubleRangeLessThanValidationError) ErrorName() string {
	return "DoubleRangeLessThanValidationError"
}

// Error satisfies the builtin error interface
func (e DoubleRangeLessThanValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sDoubleRangeLessThan.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = DoubleRangeLessThanValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = DoubleRangeLessThanValidationError{}

// Validate checks the field values on DoubleRangeConst with the rules defined
// in the proto definition for this message. If any rules are violated, an
// error is returned.
func (m *DoubleRangeConst) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if item != 100 {
			return DoubleRangeConstValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value must equal 100",
			}
		}

	}

	return nil
}

// DoubleRangeConstValidationError is the validation error returned by
// DoubleRangeConst.Validate if the designated constraints aren't met.
type DoubleRangeConstValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e DoubleRangeConstValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e DoubleRangeConstValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e DoubleRangeConstValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e DoubleRangeConstValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e DoubleRangeConstValidationError) ErrorName() string { return "DoubleRangeConstValidationError" }

// Error satisfies the builtin error interface
func (e DoubleRangeConstValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sDoubleRangeConst.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = DoubleRangeConstValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = DoubleRangeConstValidationError{}
