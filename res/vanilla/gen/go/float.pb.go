// Code generated by protoc-gen-go. DO NOT EDIT.
// source: float.proto

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

type FloatRange struct {
	Content              []float32 `protobuf:"fixed32,1,rep,packed,name=content,proto3" json:"content,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *FloatRange) Reset()         { *m = FloatRange{} }
func (m *FloatRange) String() string { return proto.CompactTextString(m) }
func (*FloatRange) ProtoMessage()    {}
func (*FloatRange) Descriptor() ([]byte, []int) {
	return fileDescriptor_525ccedfd72b2d00, []int{0}
}

func (m *FloatRange) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FloatRange.Unmarshal(m, b)
}
func (m *FloatRange) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FloatRange.Marshal(b, m, deterministic)
}
func (m *FloatRange) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FloatRange.Merge(m, src)
}
func (m *FloatRange) XXX_Size() int {
	return xxx_messageInfo_FloatRange.Size(m)
}
func (m *FloatRange) XXX_DiscardUnknown() {
	xxx_messageInfo_FloatRange.DiscardUnknown(m)
}

var xxx_messageInfo_FloatRange proto.InternalMessageInfo

func (m *FloatRange) GetContent() []float32 {
	if m != nil {
		return m.Content
	}
	return nil
}

func init() {
	proto.RegisterType((*FloatRange)(nil), "vanilla.FloatRange")
}

func init() { proto.RegisterFile("float.proto", fileDescriptor_525ccedfd72b2d00) }

var fileDescriptor_525ccedfd72b2d00 = []byte{
	// 83 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0x4e, 0xcb, 0xc9, 0x4f,
	0x2c, 0xd1, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0x2f, 0x4b, 0xcc, 0xcb, 0xcc, 0xc9, 0x49,
	0x54, 0x52, 0xe3, 0xe2, 0x72, 0x03, 0x89, 0x07, 0x25, 0xe6, 0xa5, 0xa7, 0x0a, 0x49, 0x70, 0xb1,
	0x27, 0xe7, 0xe7, 0x95, 0xa4, 0xe6, 0x95, 0x48, 0x30, 0x2a, 0x30, 0x6b, 0x30, 0x05, 0xc1, 0xb8,
	0x49, 0x6c, 0x60, 0x7d, 0xc6, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0x22, 0x1c, 0x32, 0x81, 0x46,
	0x00, 0x00, 0x00,
}
