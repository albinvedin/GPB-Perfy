// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: messages.proto

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

// Validate checks the field values on MessageB with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *MessageB) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetField1(); val <= 0 || val > 1000 {
		return MessageBValidationError{
			field:  "Field1",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField2(); val <= 0 || val > 1000 {
		return MessageBValidationError{
			field:  "Field2",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField3(); val <= 0 || val > 1000 {
		return MessageBValidationError{
			field:  "Field3",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if v, ok := interface{}(m.GetField4()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return MessageBValidationError{
				field:  "Field4",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField5()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return MessageBValidationError{
				field:  "Field5",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// MessageBValidationError is the validation error returned by
// MessageB.Validate if the designated constraints aren't met.
type MessageBValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e MessageBValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e MessageBValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e MessageBValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e MessageBValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e MessageBValidationError) ErrorName() string { return "MessageBValidationError" }

// Error satisfies the builtin error interface
func (e MessageBValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sMessageB.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = MessageBValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = MessageBValidationError{}

// Validate checks the field values on MessageC with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *MessageC) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetField1(); val <= 0 || val > 1000 {
		return MessageCValidationError{
			field:  "Field1",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField2(); val <= 0 || val > 1000 {
		return MessageCValidationError{
			field:  "Field2",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField3(); val <= 0 || val > 1000 {
		return MessageCValidationError{
			field:  "Field3",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if v, ok := interface{}(m.GetField4()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return MessageCValidationError{
				field:  "Field4",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField5()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return MessageCValidationError{
				field:  "Field5",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// MessageCValidationError is the validation error returned by
// MessageC.Validate if the designated constraints aren't met.
type MessageCValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e MessageCValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e MessageCValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e MessageCValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e MessageCValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e MessageCValidationError) ErrorName() string { return "MessageCValidationError" }

// Error satisfies the builtin error interface
func (e MessageCValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sMessageC.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = MessageCValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = MessageCValidationError{}

// Validate checks the field values on MessageD with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *MessageD) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetField1(); val <= 0 || val > 1000 {
		return MessageDValidationError{
			field:  "Field1",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField2(); val <= 0 || val > 1000 {
		return MessageDValidationError{
			field:  "Field2",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField3(); val <= 0 || val > 1000 {
		return MessageDValidationError{
			field:  "Field3",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if v, ok := interface{}(m.GetField4()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return MessageDValidationError{
				field:  "Field4",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	if v, ok := interface{}(m.GetField5()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return MessageDValidationError{
				field:  "Field5",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// MessageDValidationError is the validation error returned by
// MessageD.Validate if the designated constraints aren't met.
type MessageDValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e MessageDValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e MessageDValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e MessageDValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e MessageDValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e MessageDValidationError) ErrorName() string { return "MessageDValidationError" }

// Error satisfies the builtin error interface
func (e MessageDValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sMessageD.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = MessageDValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = MessageDValidationError{}

// Validate checks the field values on MessageE with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *MessageE) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetField1(); val <= 0 || val > 1000 {
		return MessageEValidationError{
			field:  "Field1",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField2(); val <= 0 || val > 1000 {
		return MessageEValidationError{
			field:  "Field2",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField3(); val <= 0 || val > 1000 {
		return MessageEValidationError{
			field:  "Field3",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField4(); val <= 0 || val > 1000 {
		return MessageEValidationError{
			field:  "Field4",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if v, ok := interface{}(m.GetField5()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return MessageEValidationError{
				field:  "Field5",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// MessageEValidationError is the validation error returned by
// MessageE.Validate if the designated constraints aren't met.
type MessageEValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e MessageEValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e MessageEValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e MessageEValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e MessageEValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e MessageEValidationError) ErrorName() string { return "MessageEValidationError" }

// Error satisfies the builtin error interface
func (e MessageEValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sMessageE.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = MessageEValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = MessageEValidationError{}

// Validate checks the field values on MessageF with the rules defined in the
// proto definition for this message. If any rules are violated, an error is returned.
func (m *MessageF) Validate() error {
	if m == nil {
		return nil
	}

	if val := m.GetField1(); val <= 0 || val > 1000 {
		return MessageFValidationError{
			field:  "Field1",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField2(); val <= 0 || val > 1000 {
		return MessageFValidationError{
			field:  "Field2",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField3(); val <= 0 || val > 1000 {
		return MessageFValidationError{
			field:  "Field3",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField4(); val <= 0 || val > 1000 {
		return MessageFValidationError{
			field:  "Field4",
			reason: "value must be inside range (0, 1000]",
		}
	}

	if val := m.GetField5(); val <= 0 || val > 1000 {
		return MessageFValidationError{
			field:  "Field5",
			reason: "value must be inside range (0, 1000]",
		}
	}

	return nil
}

// MessageFValidationError is the validation error returned by
// MessageF.Validate if the designated constraints aren't met.
type MessageFValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e MessageFValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e MessageFValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e MessageFValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e MessageFValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e MessageFValidationError) ErrorName() string { return "MessageFValidationError" }

// Error satisfies the builtin error interface
func (e MessageFValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sMessageF.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = MessageFValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = MessageFValidationError{}
