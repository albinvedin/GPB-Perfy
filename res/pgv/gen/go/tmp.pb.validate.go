// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: tmp.proto

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

// Validate checks the field values on Parent with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *Parent) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetChildren() {
		_, _ = idx, item

		if v, ok := interface{}(item).(interface{ Validate() error }); ok {
			if err := v.Validate(); err != nil {
				return ParentValidationError{
					field:  fmt.Sprintf("Children[%v]", idx),
					reason: "embedded message failed validation",
					cause:  err,
				}
			}
		}

	}

	return nil
}

// ParentValidationError is the validation error returned by Parent.Validate if
// the designated constraints aren't met.
type ParentValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e ParentValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e ParentValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e ParentValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e ParentValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e ParentValidationError) ErrorName() string { return "ParentValidationError" }

// Error satisfies the builtin error interface
func (e ParentValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sParent.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = ParentValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = ParentValidationError{}

// Validate checks the field values on Child with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *Child) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetInt64Range(); val < 10 || val > 20 {
		return ChildValidationError{
			field:  "Int64Range",
			reason: "value must be inside range [10, 20]",
		}
	}

	if val := m.GetDoubleRange(); val < 10 || val > 20 {
		return ChildValidationError{
			field:  "DoubleRange",
			reason: "value must be inside range [10, 20]",
		}
	}

	if !_Child_StringPattern_Pattern.MatchString(m.GetStringPattern()) {
		return ChildValidationError{
			field:  "StringPattern",
			reason: "value does not match regex pattern \"^[A-Z][a-z]*(-[A-Z][a-z]*)?( [A-Z][a-z]*(-[A-Z][a-z]*)?)* [A-Z][a-z]*(-[A-Z][a-z]*)?$\"",
		}
	}

	return nil
}

// ChildValidationError is the validation error returned by Child.Validate if
// the designated constraints aren't met.
type ChildValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e ChildValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e ChildValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e ChildValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e ChildValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e ChildValidationError) ErrorName() string { return "ChildValidationError" }

// Error satisfies the builtin error interface
func (e ChildValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sChild.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = ChildValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = ChildValidationError{}

var _Child_StringPattern_Pattern = regexp.MustCompile("^[A-Z][a-z]*(-[A-Z][a-z]*)?( [A-Z][a-z]*(-[A-Z][a-z]*)?)* [A-Z][a-z]*(-[A-Z][a-z]*)?$")