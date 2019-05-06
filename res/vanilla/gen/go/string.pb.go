// Code generated by protoc-gen-go. DO NOT EDIT.
// source: string.proto

package vanilla

import (
	fmt "fmt"
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

type StringRange struct {
	Content              []string `protobuf:"bytes,1,rep,name=content,proto3" json:"content,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *StringRange) Reset()         { *m = StringRange{} }
func (m *StringRange) String() string { return proto.CompactTextString(m) }
func (*StringRange) ProtoMessage()    {}
func (*StringRange) Descriptor() ([]byte, []int) {
	return fileDescriptor_38ecded40dd872b6, []int{0}
}

func (m *StringRange) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StringRange.Unmarshal(m, b)
}
func (m *StringRange) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StringRange.Marshal(b, m, deterministic)
}
func (m *StringRange) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StringRange.Merge(m, src)
}
func (m *StringRange) XXX_Size() int {
	return xxx_messageInfo_StringRange.Size(m)
}
func (m *StringRange) XXX_DiscardUnknown() {
	xxx_messageInfo_StringRange.DiscardUnknown(m)
}

var xxx_messageInfo_StringRange proto.InternalMessageInfo

func (m *StringRange) GetContent() []string {
	if m != nil {
		return m.Content
	}
	return nil
}

func init() {
	proto.RegisterType((*StringRange)(nil), "vanilla.StringRange")
}

func init() { proto.RegisterFile("string.proto", fileDescriptor_38ecded40dd872b6) }

var fileDescriptor_38ecded40dd872b6 = []byte{
	// 84 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0x29, 0x2e, 0x29, 0xca,
	0xcc, 0x4b, 0xd7, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0x2f, 0x4b, 0xcc, 0xcb, 0xcc, 0xc9,
	0x49, 0x54, 0x52, 0xe7, 0xe2, 0x0e, 0x06, 0x4b, 0x04, 0x25, 0xe6, 0xa5, 0xa7, 0x0a, 0x49, 0x70,
	0xb1, 0x27, 0xe7, 0xe7, 0x95, 0xa4, 0xe6, 0x95, 0x48, 0x30, 0x2a, 0x30, 0x6b, 0x70, 0x06, 0xc1,
	0xb8, 0x49, 0x6c, 0x60, 0x8d, 0xc6, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xae, 0x49, 0xa9, 0x77,
	0x48, 0x00, 0x00, 0x00,
}