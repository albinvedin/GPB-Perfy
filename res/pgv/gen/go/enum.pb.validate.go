// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: enum.proto

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

// Validate checks the field values on EnumRangeConst with the rules defined in
// the proto definition for this message. If any rules are violated, an error
// is returned.
func (m *EnumRangeConst) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if item != 0 {
			return EnumRangeConstValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value must equal 0",
			}
		}

	}

	return nil
}

// EnumRangeConstValidationError is the validation error returned by
// EnumRangeConst.Validate if the designated constraints aren't met.
type EnumRangeConstValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e EnumRangeConstValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e EnumRangeConstValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e EnumRangeConstValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e EnumRangeConstValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e EnumRangeConstValidationError) ErrorName() string { return "EnumRangeConstValidationError" }

// Error satisfies the builtin error interface
func (e EnumRangeConstValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sEnumRangeConst.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = EnumRangeConstValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = EnumRangeConstValidationError{}

// Validate checks the field values on EnumRangeDefinedOnly with the rules
// defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *EnumRangeDefinedOnly) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if _, ok := EnumRangeDefinedOnly_Sex_name[int32(item)]; !ok {
			return EnumRangeDefinedOnlyValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value must be one of the defined enum values",
			}
		}

	}

	return nil
}

// EnumRangeDefinedOnlyValidationError is the validation error returned by
// EnumRangeDefinedOnly.Validate if the designated constraints aren't met.
type EnumRangeDefinedOnlyValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e EnumRangeDefinedOnlyValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e EnumRangeDefinedOnlyValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e EnumRangeDefinedOnlyValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e EnumRangeDefinedOnlyValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e EnumRangeDefinedOnlyValidationError) ErrorName() string {
	return "EnumRangeDefinedOnlyValidationError"
}

// Error satisfies the builtin error interface
func (e EnumRangeDefinedOnlyValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sEnumRangeDefinedOnly.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = EnumRangeDefinedOnlyValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = EnumRangeDefinedOnlyValidationError{}
