// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: string.proto

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

// Validate checks the field values on StringRangePrefix with the rules defined
// in the proto definition for this message. If any rules are violated, an
// error is returned.
func (m *StringRangePrefix) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if !strings.HasPrefix(item, "Foo") {
			return StringRangePrefixValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value does not have prefix \"Foo\"",
			}
		}

	}

	return nil
}

// StringRangePrefixValidationError is the validation error returned by
// StringRangePrefix.Validate if the designated constraints aren't met.
type StringRangePrefixValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e StringRangePrefixValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e StringRangePrefixValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e StringRangePrefixValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e StringRangePrefixValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e StringRangePrefixValidationError) ErrorName() string {
	return "StringRangePrefixValidationError"
}

// Error satisfies the builtin error interface
func (e StringRangePrefixValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sStringRangePrefix.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = StringRangePrefixValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = StringRangePrefixValidationError{}

// Validate checks the field values on StringRangeSuffix with the rules defined
// in the proto definition for this message. If any rules are violated, an
// error is returned.
func (m *StringRangeSuffix) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if !strings.HasSuffix(item, "Foo") {
			return StringRangeSuffixValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value does not have suffix \"Foo\"",
			}
		}

	}

	return nil
}

// StringRangeSuffixValidationError is the validation error returned by
// StringRangeSuffix.Validate if the designated constraints aren't met.
type StringRangeSuffixValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e StringRangeSuffixValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e StringRangeSuffixValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e StringRangeSuffixValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e StringRangeSuffixValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e StringRangeSuffixValidationError) ErrorName() string {
	return "StringRangeSuffixValidationError"
}

// Error satisfies the builtin error interface
func (e StringRangeSuffixValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sStringRangeSuffix.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = StringRangeSuffixValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = StringRangeSuffixValidationError{}

// Validate checks the field values on StringRangeMaxLen with the rules defined
// in the proto definition for this message. If any rules are violated, an
// error is returned.
func (m *StringRangeMaxLen) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if utf8.RuneCountInString(item) > 5 {
			return StringRangeMaxLenValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value length must be at most 5 runes",
			}
		}

	}

	return nil
}

// StringRangeMaxLenValidationError is the validation error returned by
// StringRangeMaxLen.Validate if the designated constraints aren't met.
type StringRangeMaxLenValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e StringRangeMaxLenValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e StringRangeMaxLenValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e StringRangeMaxLenValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e StringRangeMaxLenValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e StringRangeMaxLenValidationError) ErrorName() string {
	return "StringRangeMaxLenValidationError"
}

// Error satisfies the builtin error interface
func (e StringRangeMaxLenValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sStringRangeMaxLen.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = StringRangeMaxLenValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = StringRangeMaxLenValidationError{}

// Validate checks the field values on StringRangeMinLen with the rules defined
// in the proto definition for this message. If any rules are violated, an
// error is returned.
func (m *StringRangeMinLen) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if utf8.RuneCountInString(item) < 2 {
			return StringRangeMinLenValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value length must be at least 2 runes",
			}
		}

	}

	return nil
}

// StringRangeMinLenValidationError is the validation error returned by
// StringRangeMinLen.Validate if the designated constraints aren't met.
type StringRangeMinLenValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e StringRangeMinLenValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e StringRangeMinLenValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e StringRangeMinLenValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e StringRangeMinLenValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e StringRangeMinLenValidationError) ErrorName() string {
	return "StringRangeMinLenValidationError"
}

// Error satisfies the builtin error interface
func (e StringRangeMinLenValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sStringRangeMinLen.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = StringRangeMinLenValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = StringRangeMinLenValidationError{}

// Validate checks the field values on StringRangeContains with the rules
// defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *StringRangeContains) Validate() error {
	if m == nil {
		return nil
	}

	for idx, item := range m.GetContent() {
		_, _ = idx, item

		if !strings.Contains(item, "Foo") {
			return StringRangeContainsValidationError{
				field:  fmt.Sprintf("Content[%v]", idx),
				reason: "value does not contain substring \"Foo\"",
			}
		}

	}

	return nil
}

// StringRangeContainsValidationError is the validation error returned by
// StringRangeContains.Validate if the designated constraints aren't met.
type StringRangeContainsValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e StringRangeContainsValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e StringRangeContainsValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e StringRangeContainsValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e StringRangeContainsValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e StringRangeContainsValidationError) ErrorName() string {
	return "StringRangeContainsValidationError"
}

// Error satisfies the builtin error interface
func (e StringRangeContainsValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sStringRangeContains.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = StringRangeContainsValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = StringRangeContainsValidationError{}
