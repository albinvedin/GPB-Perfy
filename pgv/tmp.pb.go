// Code generated by protoc-gen-go. DO NOT EDIT.
// source: tmp.proto

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

type Parent struct {
	Children             []*Child `protobuf:"bytes,1,rep,name=children,proto3" json:"children,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Parent) Reset()         { *m = Parent{} }
func (m *Parent) String() string { return proto.CompactTextString(m) }
func (*Parent) ProtoMessage()    {}
func (*Parent) Descriptor() ([]byte, []int) {
	return fileDescriptor_096f24f1bc44e34c, []int{0}
}

func (m *Parent) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Parent.Unmarshal(m, b)
}
func (m *Parent) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Parent.Marshal(b, m, deterministic)
}
func (m *Parent) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Parent.Merge(m, src)
}
func (m *Parent) XXX_Size() int {
	return xxx_messageInfo_Parent.Size(m)
}
func (m *Parent) XXX_DiscardUnknown() {
	xxx_messageInfo_Parent.DiscardUnknown(m)
}

var xxx_messageInfo_Parent proto.InternalMessageInfo

func (m *Parent) GetChildren() []*Child {
	if m != nil {
		return m.Children
	}
	return nil
}

type Child struct {
	Int64Range           uint64   `protobuf:"varint,1,opt,name=int64Range,proto3" json:"int64Range,omitempty"`
	DoubleRange          float64  `protobuf:"fixed64,2,opt,name=doubleRange,proto3" json:"doubleRange,omitempty"`
	StringPattern        string   `protobuf:"bytes,3,opt,name=stringPattern,proto3" json:"stringPattern,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Child) Reset()         { *m = Child{} }
func (m *Child) String() string { return proto.CompactTextString(m) }
func (*Child) ProtoMessage()    {}
func (*Child) Descriptor() ([]byte, []int) {
	return fileDescriptor_096f24f1bc44e34c, []int{1}
}

func (m *Child) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Child.Unmarshal(m, b)
}
func (m *Child) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Child.Marshal(b, m, deterministic)
}
func (m *Child) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Child.Merge(m, src)
}
func (m *Child) XXX_Size() int {
	return xxx_messageInfo_Child.Size(m)
}
func (m *Child) XXX_DiscardUnknown() {
	xxx_messageInfo_Child.DiscardUnknown(m)
}

var xxx_messageInfo_Child proto.InternalMessageInfo

func (m *Child) GetInt64Range() uint64 {
	if m != nil {
		return m.Int64Range
	}
	return 0
}

func (m *Child) GetDoubleRange() float64 {
	if m != nil {
		return m.DoubleRange
	}
	return 0
}

func (m *Child) GetStringPattern() string {
	if m != nil {
		return m.StringPattern
	}
	return ""
}

func init() {
	proto.RegisterType((*Parent)(nil), "pgv.Parent")
	proto.RegisterType((*Child)(nil), "pgv.Child")
}

func init() { proto.RegisterFile("tmp.proto", fileDescriptor_096f24f1bc44e34c) }

var fileDescriptor_096f24f1bc44e34c = []byte{
	// 245 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0x2c, 0xc9, 0x2d, 0xd0,
	0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0x2e, 0x48, 0x2f, 0x93, 0x12, 0x2f, 0x4b, 0xcc, 0xc9,
	0x4c, 0x49, 0x2c, 0x49, 0xd5, 0x87, 0x31, 0x20, 0xb2, 0x4a, 0x06, 0x5c, 0x6c, 0x01, 0x89, 0x45,
	0xa9, 0x79, 0x25, 0x42, 0x6a, 0x5c, 0x1c, 0xc9, 0x19, 0x99, 0x39, 0x29, 0x45, 0xa9, 0x79, 0x12,
	0x8c, 0x0a, 0xcc, 0x1a, 0xdc, 0x46, 0x5c, 0x7a, 0x05, 0xe9, 0x65, 0x7a, 0xce, 0x20, 0xc1, 0x20,
	0xb8, 0x9c, 0xd2, 0x0f, 0x46, 0x2e, 0x56, 0xb0, 0x98, 0x90, 0x36, 0x17, 0x57, 0x66, 0x5e, 0x89,
	0x99, 0x49, 0x50, 0x62, 0x5e, 0x7a, 0xaa, 0x04, 0xa3, 0x02, 0xa3, 0x06, 0x8b, 0x13, 0xf7, 0xae,
	0x97, 0x07, 0x98, 0xd9, 0x8c, 0x58, 0x24, 0x44, 0x34, 0xb8, 0x82, 0x90, 0xa4, 0x85, 0xac, 0xb9,
	0xb8, 0x53, 0xf2, 0x4b, 0x93, 0x72, 0x52, 0x21, 0xaa, 0x99, 0x14, 0x18, 0x35, 0x18, 0x9d, 0x24,
	0x41, 0xaa, 0x45, 0x84, 0x84, 0x24, 0x19, 0xc0, 0xc0, 0xc4, 0x41, 0x13, 0xc2, 0x50, 0x71, 0x08,
	0x42, 0x56, 0x2d, 0xd4, 0xc2, 0xc8, 0xc5, 0x5b, 0x5c, 0x52, 0x94, 0x99, 0x97, 0x1e, 0x90, 0x58,
	0x52, 0x92, 0x5a, 0x94, 0x27, 0xc1, 0xac, 0xc0, 0xa8, 0xc1, 0xe9, 0x14, 0x07, 0xd2, 0x1f, 0x59,
	0x14, 0x6e, 0x14, 0x1a, 0x17, 0xed, 0xa8, 0x1b, 0x15, 0x1b, 0x9d, 0xa8, 0x5b, 0x15, 0xab, 0xa5,
	0xa1, 0x8b, 0xc4, 0xd1, 0xb4, 0xd7, 0x50, 0xc0, 0x2d, 0xa7, 0xa9, 0x85, 0x47, 0x52, 0x25, 0x08,
	0xd5, 0xd2, 0x24, 0x36, 0x70, 0x98, 0x19, 0x03, 0x02, 0x00, 0x00, 0xff, 0xff, 0xdc, 0x26, 0xe5,
	0xb9, 0x5e, 0x01, 0x00, 0x00,
}