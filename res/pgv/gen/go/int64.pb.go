// Code generated by protoc-gen-go. DO NOT EDIT.
// source: int64.proto

package pgv

import (
	fmt "fmt"
	_ "github.com/envoyproxy/protoc-gen-validate/validate"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type Int64RangeGreaterThan struct {
	Content              []int64  `protobuf:"varint,1,rep,packed,name=content,proto3" json:"content,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Int64RangeGreaterThan) Reset()         { *m = Int64RangeGreaterThan{} }
func (m *Int64RangeGreaterThan) String() string { return proto.CompactTextString(m) }
func (*Int64RangeGreaterThan) ProtoMessage()    {}
func (*Int64RangeGreaterThan) Descriptor() ([]byte, []int) {
	return fileDescriptor_8b67b79850cd447c, []int{0}
}

func (m *Int64RangeGreaterThan) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Int64RangeGreaterThan.Unmarshal(m, b)
}
func (m *Int64RangeGreaterThan) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Int64RangeGreaterThan.Marshal(b, m, deterministic)
}
func (m *Int64RangeGreaterThan) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Int64RangeGreaterThan.Merge(m, src)
}
func (m *Int64RangeGreaterThan) XXX_Size() int {
	return xxx_messageInfo_Int64RangeGreaterThan.Size(m)
}
func (m *Int64RangeGreaterThan) XXX_DiscardUnknown() {
	xxx_messageInfo_Int64RangeGreaterThan.DiscardUnknown(m)
}

var xxx_messageInfo_Int64RangeGreaterThan proto.InternalMessageInfo

func (m *Int64RangeGreaterThan) GetContent() []int64 {
	if m != nil {
		return m.Content
	}
	return nil
}

type Int64RangeConst struct {
	Content              []int64  `protobuf:"varint,1,rep,packed,name=content,proto3" json:"content,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Int64RangeConst) Reset()         { *m = Int64RangeConst{} }
func (m *Int64RangeConst) String() string { return proto.CompactTextString(m) }
func (*Int64RangeConst) ProtoMessage()    {}
func (*Int64RangeConst) Descriptor() ([]byte, []int) {
	return fileDescriptor_8b67b79850cd447c, []int{1}
}

func (m *Int64RangeConst) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Int64RangeConst.Unmarshal(m, b)
}
func (m *Int64RangeConst) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Int64RangeConst.Marshal(b, m, deterministic)
}
func (m *Int64RangeConst) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Int64RangeConst.Merge(m, src)
}
func (m *Int64RangeConst) XXX_Size() int {
	return xxx_messageInfo_Int64RangeConst.Size(m)
}
func (m *Int64RangeConst) XXX_DiscardUnknown() {
	xxx_messageInfo_Int64RangeConst.DiscardUnknown(m)
}

var xxx_messageInfo_Int64RangeConst proto.InternalMessageInfo

func (m *Int64RangeConst) GetContent() []int64 {
	if m != nil {
		return m.Content
	}
	return nil
}

func init() {
	proto.RegisterType((*Int64RangeGreaterThan)(nil), "pgv.Int64RangeGreaterThan")
	proto.RegisterType((*Int64RangeConst)(nil), "pgv.Int64RangeConst")
}

func init() { proto.RegisterFile("int64.proto", fileDescriptor_8b67b79850cd447c) }

var fileDescriptor_8b67b79850cd447c = []byte{
	// 138 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0xce, 0xcc, 0x2b, 0x31,
	0x33, 0xd1, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0x2e, 0x48, 0x2f, 0x93, 0x12, 0x2f, 0x4b,
	0xcc, 0xc9, 0x4c, 0x49, 0x2c, 0x49, 0xd5, 0x87, 0x31, 0x20, 0xb2, 0x4a, 0x8e, 0x5c, 0xa2, 0x9e,
	0x20, 0xc5, 0x41, 0x89, 0x79, 0xe9, 0xa9, 0xee, 0x45, 0xa9, 0x89, 0x25, 0xa9, 0x45, 0x21, 0x19,
	0x89, 0x79, 0x42, 0x1a, 0x5c, 0xec, 0xc9, 0xf9, 0x79, 0x25, 0xa9, 0x79, 0x25, 0x12, 0x8c, 0x0a,
	0xcc, 0x1a, 0xcc, 0x4e, 0x7c, 0xbb, 0x5e, 0x1e, 0x60, 0xe6, 0x9c, 0xc4, 0xc8, 0xa6, 0xc4, 0xa2,
	0xc4, 0xa4, 0x90, 0x12, 0x04, 0x93, 0x56, 0xb2, 0xe6, 0xe2, 0x47, 0x18, 0xe1, 0x9c, 0x9f, 0x57,
	0x5c, 0x42, 0x40, 0x33, 0x07, 0x42, 0x73, 0x12, 0x1b, 0xd8, 0x19, 0xc6, 0x80, 0x00, 0x00, 0x00,
	0xff, 0xff, 0x3d, 0x25, 0x0f, 0xd5, 0xb3, 0x00, 0x00, 0x00,
}