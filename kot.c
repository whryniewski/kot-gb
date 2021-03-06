#include <gb/gb.h>
#include <gb/sample.h>
const UBYTE __meow_smol_ima[] = {
  0xff, 0x77, 0x77, 0x7a, 0xc8, 0xbb, 0xa8, 0x72, 0x33, 0x08, 0xbb, 0xbb,
  0xdb, 0x02, 0x63, 0x50, 0x09, 0xab, 0x9d, 0x8a, 0x03, 0x72, 0x11, 0x9a,
  0xa9, 0xbb, 0xc0, 0x16, 0x42, 0x19, 0xaa, 0x9b, 0xbc, 0x08, 0x63, 0x40,
  0x08, 0xba, 0x9b, 0xc9, 0x84, 0x62, 0x20, 0xa9, 0xaa, 0xbc, 0x99, 0x36,
  0x51, 0x08, 0xa9, 0x9a, 0xbb, 0x93, 0x74, 0x21, 0x9a, 0x9a, 0xbb, 0xc0,
  0x14, 0x53, 0x18, 0xab, 0x9b, 0xcb, 0x82, 0x55, 0x31, 0x8a, 0x9b, 0x9c,
  0xba, 0x24, 0x72, 0x29, 0xa8, 0xb9, 0xbb, 0xa2, 0x56, 0x30, 0x0b, 0x8b,
  0x9c, 0xbb, 0x17, 0x33, 0x18, 0xab, 0x9b, 0xcb, 0x80, 0x73, 0x40, 0x0a,
  0xa9, 0x9b, 0xe8, 0x23, 0x53, 0x09, 0xa8, 0xb9, 0xea, 0x01, 0x37, 0x11,
  0x99, 0xa8, 0xba, 0xb9, 0x44, 0x52, 0x88, 0xa9, 0x9c, 0xab, 0x12, 0x73,
  0x28, 0x8b, 0x99, 0xbd, 0x98, 0x37, 0x30, 0x0a, 0x99, 0x8c, 0xb9, 0x03,
  0x73, 0x18, 0xa8, 0xb9, 0xbb, 0xb0, 0x57, 0x30, 0x89, 0xa9, 0x9a, 0xc9,
  0x23, 0x63, 0x29, 0xab, 0x8d, 0x8d, 0x01, 0x27, 0x10, 0x99, 0x98, 0xaa,
  0xc1, 0x25, 0x21, 0x0a, 0x99, 0xab, 0xcb, 0x16, 0x42, 0x19, 0x9a, 0x98,
  0xe9, 0x81, 0x53, 0x38, 0xaa, 0x99, 0xda, 0xa1, 0x27, 0x31, 0x0b, 0x9a,
  0x9c, 0x99, 0x85, 0x61, 0x19, 0x98, 0xaa, 0x9a, 0x80, 0x37, 0x40, 0x0b,
  0xa8, 0xa9, 0xb0, 0x84, 0x54, 0x10, 0xab, 0x99, 0xba, 0xc0, 0x34, 0x72,
  0x09, 0xa9, 0x9b, 0xa9, 0xa3, 0x66, 0x3a, 0x0c, 0x80, 0xba, 0x92, 0x83,
  0x78, 0x69, 0x09, 0x99, 0x99, 0xa1, 0x34, 0x41, 0x89, 0xaa, 0x99, 0xd8,
  0x20, 0x72, 0x1a, 0x0b, 0x9b, 0xbb, 0x4e, 0x22, 0x53, 0xaa, 0x9a, 0x8c,
  0x9a, 0x12, 0x37, 0x39, 0x0b, 0x0b, 0xab, 0x91, 0x17, 0x42, 0x88, 0xb8,
  0x9c, 0x8b, 0x01, 0x37, 0x40, 0x8a, 0x9b, 0x0a, 0xb9, 0x16, 0x43, 0x00,
  0xba, 0x9b, 0xb9, 0xc1, 0x27, 0x51, 0x89, 0x99, 0x9c, 0x89, 0x02, 0x46,
  0x18, 0x8a, 0x99, 0xba, 0x91, 0x05, 0x53, 0x08, 0xbb, 0x8b, 0xd0, 0xb3,
  0x17, 0x32, 0xaa, 0xb0, 0x9c, 0x9a, 0x04, 0x46, 0x19, 0x0b, 0x98, 0xba,
  0x90, 0x17, 0x34, 0x8b, 0x99, 0x8c, 0xa8, 0x83, 0x64, 0x28, 0x8b, 0xa8,
  0xca, 0x90, 0x14, 0x64, 0x89, 0xa9, 0x89, 0xb9, 0x82, 0x36, 0x51, 0x9a,
  0xa9, 0x9a, 0xa9, 0x13, 0x65, 0x28, 0xaa, 0xa8, 0xc8, 0xa8, 0x34, 0x62,
  0x19, 0xba, 0x9b, 0xab, 0x01, 0x67, 0x20, 0x9a, 0xa0, 0xba, 0xa0, 0x14,
  0x72, 0x19, 0xaa, 0x8a, 0xba, 0x81, 0x37, 0x51, 0x99, 0xa8, 0xba, 0xa0,
  0x12, 0x74, 0x18, 0x9a, 0xa8, 0xc9, 0x90, 0x26, 0x42, 0x8a, 0xaa, 0x0d,
  0x89, 0x01, 0x36, 0x30, 0x9b, 0xb8, 0xba, 0xba, 0x27, 0x63, 0x0a, 0xa9,
  0x99, 0xbb, 0x20, 0x55, 0x13, 0xa9, 0xb9, 0xac, 0x99, 0x06, 0x35, 0x19,
  0xb9, 0x8a, 0xaa, 0xb2, 0x37, 0x51, 0x89, 0xb8, 0x8b, 0xb8, 0x95, 0x44,
  0x28, 0xab, 0x89, 0xad, 0x89, 0x25, 0x52, 0x09, 0xba, 0x0b, 0xaa, 0x81,
  0x74, 0x30, 0xaa, 0xb0, 0xac, 0xa0, 0x14, 0x46, 0x08, 0xaa, 0x98, 0xaa,
  0x80, 0x36, 0x51, 0x8a, 0xa9, 0x9a, 0xaa, 0x83, 0x75, 0x20, 0xaa, 0xa8,
  0xba, 0x91, 0x84, 0x74, 0x08, 0xb8, 0xb8, 0xa9, 0x08, 0x37, 0x33, 0x9b,
  0xba, 0x9a, 0xc9, 0x31, 0x47, 0x38, 0x9b, 0xa0, 0xba, 0xc0, 0x13, 0x74,
  0x19, 0x9c, 0x88, 0xa9, 0x80, 0x14, 0x62, 0x09, 0xc8, 0x99, 0xa9, 0x00,
  0x36, 0x51, 0x8b, 0xa9, 0x8a, 0xa9, 0x22, 0x37, 0x50, 0xaa, 0xa8, 0x8b,
  0x98, 0x14, 0x47, 0x18, 0xb9, 0xa0, 0xa9, 0x90, 0x23, 0x73, 0x19, 0xca,
  0x98, 0x9b, 0x01, 0x27, 0x42, 0x8a, 0xc9, 0x89, 0xa8, 0x02, 0x26, 0x42,
  0x9b, 0xc9, 0x89, 0xa8, 0x12, 0x55, 0x30, 0xbb, 0xb8, 0xaa, 0xa8, 0x33,
  0x75, 0x38, 0xbc, 0x99, 0x8a, 0xa1, 0x25, 0x36, 0x2a, 0xab, 0xa8, 0x9c,
  0x01, 0x15, 0x43, 0x1c, 0xaa, 0x99, 0xb9, 0x82, 0x46, 0x42, 0x8c, 0xa9,
  0x89, 0xa9, 0x12, 0x36, 0x51, 0x9a, 0xc9, 0x09, 0xa8, 0x12, 0x45, 0x31,
  0xbc, 0xb8, 0x9a, 0x98, 0x31, 0x74, 0x30, 0xda, 0x98, 0x8a, 0x80, 0x12,
  0x55, 0x28, 0xca, 0xa0, 0x8a, 0x92, 0x03, 0x47, 0x28, 0xca, 0x90, 0x9a,
  0x82, 0x11, 0x55, 0x29, 0xcb, 0x80, 0x9a, 0x81, 0x22, 0x56, 0x2a, 0xca,
  0x80, 0x9a, 0x01, 0x21, 0x55, 0x2a, 0xcb, 0x80, 0x9b, 0x12, 0x30, 0x65,
  0x1a, 0xca, 0x81, 0xaa, 0x03, 0x12, 0x37, 0x3b, 0xcb, 0x81, 0xab, 0x13,
  0x11, 0x66, 0x1b, 0xba, 0x00, 0xab, 0x13, 0x20, 0x57, 0x1a, 0xc9, 0x00,
  0xaa, 0x12, 0x29, 0x37, 0x4b, 0xba, 0x11, 0xbc, 0x12, 0x18, 0x27, 0x3b,
  0xd9, 0x11, 0xab, 0x04, 0x09, 0x17, 0x3a, 0xd9, 0x11, 0x9b, 0x83, 0x18,
  0x97, 0x38, 0xda, 0x02, 0x8a, 0xa3, 0x28, 0xa3, 0x72, 0xcc, 0x01, 0x1a,
  0xa1, 0x20, 0x90, 0x73, 0xbd, 0x91, 0x28, 0xb8, 0x21, 0x88, 0x37, 0x1e,
  0xa0, 0x20, 0xa9, 0x21, 0x90, 0x17, 0x1b, 0xd8, 0x11, 0x0b, 0x83, 0x09,
  0x06, 0x49, 0xe9, 0x10, 0x19, 0x91, 0x19, 0x02, 0x70, 0xd9, 0x81, 0x18,
  0xa1, 0x19, 0x82, 0x62, 0xcc, 0x81, 0x10, 0xa8, 0x20, 0xa1, 0x64, 0xae,
  0x80, 0x10, 0x98, 0x10, 0x88, 0x37, 0x8d, 0x90, 0x11, 0x99, 0x10, 0x88,
  0x17, 0x1c, 0xa8, 0x02, 0x8a, 0x12, 0x98, 0x07, 0x3b, 0xe8, 0x82, 0x09,
  0x81, 0x08, 0x94, 0x78, 0xc9, 0x81, 0x19, 0x81, 0x08, 0x80, 0x72, 0xcb,
  0x80, 0x38, 0xa0, 0x28, 0x89, 0x75, 0xac, 0x90, 0x20, 0x98, 0x10, 0x88,
  0x17, 0x1c, 0xb8, 0x12, 0x8a, 0x12, 0x98, 0x87, 0x5b, 0xb9, 0x02, 0x0a,
  0x02, 0x88, 0x96, 0x79, 0xba, 0x01, 0x2a, 0x92, 0x19, 0x80, 0x73, 0xcc,
  0x80, 0x28, 0x90, 0x28, 0x98, 0x65, 0x9c, 0xa0, 0x11, 0x98, 0x11, 0x98,
  0x86, 0x6a, 0xc8, 0x81, 0x19, 0x82, 0x09, 0x88, 0x73, 0xcb, 0x80, 0x28,
  0x98, 0x28, 0x88, 0x37, 0x2e, 0xa8, 0x11, 0x89, 0x11, 0x98, 0x03, 0x70,
  0xe9, 0x00, 0x18, 0x91, 0x19, 0x90, 0x73, 0xbd, 0x91, 0x28, 0x98, 0x10,
  0x89, 0x17, 0x4b, 0xc8, 0x01, 0x09, 0x81, 0x88, 0x83, 0x72, 0xdb, 0x08,
  0x39, 0x90, 0x28, 0x89, 0x57, 0x8b, 0xb0, 0x03, 0x99, 0x02, 0x98, 0x97,
  0x69, 0xbb, 0x11, 0x19, 0x91, 0x18, 0x89, 0x75, 0x9c, 0x90, 0x01, 0x98,
  0x10, 0x88, 0x87, 0x3a, 0xe8, 0x00, 0x19, 0x92, 0x08, 0x89, 0x73, 0xae,
  0x80, 0x10, 0x98, 0x10, 0x88, 0x97, 0x3a, 0xe8, 0x01, 0x09, 0x81, 0x08,
  0x88, 0x72, 0xad, 0x80, 0x10, 0x98, 0x28, 0x88, 0x85, 0x5a, 0xc9, 0x01,
  0x19, 0x92, 0x08, 0x89, 0x65, 0x9d, 0x80, 0x01, 0x98, 0x01, 0x88, 0x93,
  0x70, 0xda, 0x10, 0x18, 0x90, 0x18, 0x09, 0x27, 0x1c, 0xc1, 0x01, 0x98,
  0x01, 0x80, 0x90, 0x73, 0xcd, 0x00, 0x18, 0x88, 0x28, 0x88, 0x97, 0x3a,
  0xf0, 0x81, 0x08, 0x81, 0x88, 0x09, 0x53, 0xae, 0x88, 0x28, 0x88, 0x10,
  0x88, 0xa5, 0x68, 0xc9, 0x00, 0x19, 0x81, 0x08, 0x8a, 0x54, 0x1d, 0xb0,
  0x11, 0x98, 0x01, 0x08, 0x99, 0x75, 0xad, 0x08, 0x28, 0x88, 0x18, 0x08,
  0x97, 0x29, 0xe8, 0x01, 0x80, 0x91, 0x80, 0x89, 0x62, 0x8e, 0x90, 0x28,
  0x88, 0x18, 0x08, 0xa6, 0x30, 0xf9, 0x01, 0x80, 0x91, 0x08, 0x89, 0x27,
  0x1c, 0xb0, 0x11, 0x88, 0x81, 0x08, 0x98, 0x73, 0xaf, 0x80, 0x29, 0x08,
  0x00, 0x09, 0x97, 0x28, 0xe8, 0x82, 0x88, 0x81, 0x80, 0x89, 0x27, 0x0c,
  0xa0, 0x10, 0x09, 0x00, 0x08, 0x93, 0x72, 0xdb, 0x82, 0x18, 0x90, 0x00,
  0x88, 0x87, 0x4a, 0xe8, 0x02, 0x88, 0x81, 0x80, 0x98, 0x71, 0x8f, 0x08,
  0x18, 0x08, 0x00, 0x80, 0x94, 0x38, 0xf9, 0x01, 0x80, 0x91, 0x81, 0x8a,
  0x54, 0x0e, 0x98, 0x28, 0x09, 0x18, 0x18, 0x91, 0x71, 0xbd, 0x81, 0x18,
  0x80, 0x00, 0x09, 0x97, 0x39, 0xf8, 0x01, 0x80, 0x91, 0x80, 0x89, 0x44,
  0x0f, 0x90, 0x10, 0x88, 0x00, 0x08, 0x91, 0x71, 0xbc, 0x81, 0x18, 0x88,
  0x18, 0x19, 0x97, 0x39, 0xf8, 0x82, 0x80, 0x91, 0x80, 0x0a, 0x37, 0x0d,
  0x98, 0x20, 0x89, 0x18, 0x18, 0x88, 0x72, 0xbe, 0x00, 0x18, 0x88, 0x18,
  0x08, 0x97, 0x29, 0xe8, 0x02, 0x90, 0x91, 0x81, 0x89, 0x27, 0x0c, 0xb1,
  0x10, 0x09, 0x00, 0x00, 0x8a, 0x73, 0xaf, 0x80, 0x28, 0x88, 0x08, 0x18,
  0x94, 0x58, 0xe9, 0x01, 0x00, 0x90, 0x81, 0x09, 0x87, 0x2c, 0xb0, 0x02,
  0x89, 0x00, 0x00, 0x0b, 0x74, 0x8f, 0x80, 0x18, 0x09, 0x18, 0x00, 0xa2,
  0x70, 0xca, 0x01, 0x00, 0x90, 0x00, 0x08, 0xa7, 0x3a, 0xf8, 0x02, 0x88,
  0x80, 0x81, 0x0a, 0x36, 0x0e, 0x98, 0x20, 0x09, 0x08, 0x18, 0x89, 0x72,
  0xae, 0x00, 0x18, 0x88, 0x00, 0x00, 0xb6, 0x38, 0xf9, 0x02, 0x80, 0x90,
  0x81, 0x09, 0x87, 0x1a, 0xd8, 0x11, 0x09, 0x80, 0x01, 0x8b, 0x63, 0x0f,
  0x98, 0x20, 0x89, 0x18, 0x10, 0xa0, 0x72, 0xcb, 0x81, 0x28, 0x98, 0x10,
  0x18, 0xc5, 0x40, 0xf9, 0x02, 0x80, 0x90, 0x81, 0x09, 0x97, 0x2a, 0xe0,
  0x01, 0x88, 0x80, 0x00, 0x0b, 0x37, 0x1d, 0xa0, 0x10, 0x09, 0x00, 0x00,
  0x8b, 0x73, 0x8f, 0x88, 0x28, 0x09, 0x00, 0x00, 0xa2, 0x61, 0xda, 0x82,
  0x00, 0x90, 0x81, 0x19, 0xb7, 0x38, 0xf9, 0x02, 0x80, 0x90, 0x00, 0x0a,
  0x27, 0x1d, 0xa0, 0x10, 0x09, 0x00, 0x00, 0x89, 0x72, 0x9f, 0x80, 0x28,
  0x89, 0x18, 0x18, 0xa3, 0x61, 0xe9, 0x82, 0x08, 0x90, 0x00, 0x09, 0x87,
  0x2a, 0xe8, 0x11, 0x88, 0x80, 0x00, 0x8a, 0x62, 0x1f, 0x98, 0x20, 0x88,
  0x08, 0x18, 0x90, 0x62, 0xbe, 0x81, 0x18, 0x88, 0x00, 0x19, 0x96, 0x20,
  0xf9, 0x02, 0x88, 0x80, 0x81, 0x0a, 0x07, 0x2b, 0xd8, 0x11, 0x88, 0x80,
  0x01, 0x8b, 0x63, 0x1f, 0xa8, 0x38, 0x09, 0x00, 0x00, 0x99, 0x73, 0xaf,
  0x80, 0x28, 0x88, 0x00, 0x08, 0xa4, 0x33, 0xfb, 0x83, 0x80, 0x90, 0x01,
  0x09, 0xa6, 0x40, 0xf9, 0x02, 0x88, 0x80, 0x81, 0x0b, 0x25, 0x3d, 0xba,
  0x40, 0x09, 0x08, 0x01, 0x8a, 0x17, 0x2c, 0xc8, 0x21, 0x88, 0x88, 0x10,
  0x8a, 0x73, 0x8f, 0x90, 0x28, 0x88, 0x08, 0x10, 0xa8, 0x72, 0x9f, 0x81,
  0x18, 0x88, 0x81, 0x08, 0xa3, 0x43, 0xfa, 0x82, 0x00, 0x90, 0x80, 0x18,
  0xc6, 0x11, 0xf8, 0x82, 0x80, 0x90, 0x00, 0x09, 0x96, 0x29, 0xe8, 0x02,
  0x88, 0x88, 0x01, 0x0a, 0x87, 0x2a, 0xe8, 0x11, 0x88, 0x80, 0x00, 0x0b,
  0x43, 0x4f, 0xa8, 0x38, 0x08, 0x88, 0x10, 0x8a, 0x62, 0x0f, 0x90, 0x28,
  0x09, 0x08, 0x10, 0x99, 0x62, 0x0f, 0x90, 0x28, 0x88, 0x08, 0x10, 0xa1,
  0x53, 0xce, 0x81, 0x18, 0x08, 0x80, 0x01, 0xb2, 0x63, 0xeb, 0x83, 0x08,
  0x88, 0x81, 0x19, 0xa6, 0x31, 0xfa, 0x83, 0x08, 0x90, 0x81, 0x08, 0xb7,
  0x21, 0xf9, 0x82, 0x00, 0x90, 0x80, 0x1a, 0x04, 0x59, 0xe9, 0x11, 0x08,
  0x90, 0x82, 0x0a, 0x86, 0x39, 0xf9, 0x11, 0x80, 0x90, 0x81, 0x1c, 0x23,
  0x6b, 0xd9, 0x21, 0x09, 0x80, 0x01, 0x0c, 0x16, 0x2b, 0xe8, 0x11, 0x09,
  0x08, 0x00, 0x0b, 0x44, 0x3f, 0xa8, 0x20, 0x09, 0x80, 0x01, 0x8c, 0x52,
  0x2f, 0x98, 0x28, 0x08, 0x88, 0x10, 0x89, 0x07, 0x2c, 0xc0, 0x11, 0x88,
  0x80, 0x00, 0x8a, 0x63, 0x1f, 0xa0, 0x28, 0x09, 0x08, 0x10, 0x8b, 0x54,
  0x1f, 0x98, 0x20, 0x88, 0x80, 0x18, 0x89, 0x53, 0x0f, 0xa0, 0x28, 0x09,
  0x00, 0x01, 0xa9, 0x73, 0x9f, 0x91, 0x10, 0x89, 0x00, 0x18, 0x98, 0x63,
  0xaf, 0x80, 0x28, 0x88, 0x80, 0x10, 0xb1, 0x63, 0xcd, 0x82, 0x00, 0x90,
  0x80, 0x18, 0xa1, 0x72, 0xbe, 0x82, 0x08, 0x80, 0x80, 0x01, 0xb1, 0x72,
  0xcc, 0x82, 0x18, 0x88, 0x81, 0x00, 0xb2, 0x73, 0xcd, 0x82, 0x00, 0x90,
  0x80, 0x00, 0xa1, 0x72, 0xcc, 0x82, 0x18, 0x90, 0x00, 0x00, 0xb2, 0x73,
  0xdb, 0x93, 0x18, 0x90, 0x80, 0x10, 0xc3, 0x63, 0xeb, 0x83, 0x08, 0x90,
  0x81, 0x00, 0xa0, 0x74, 0xbe, 0x82, 0x00, 0x90, 0x80, 0x01, 0xb2, 0x62,
  0xcc, 0x82, 0x08, 0x80, 0x80, 0x01, 0xc2, 0x63, 0xdb, 0x93, 0x00, 0x90,
  0x80, 0x01, 0xd3, 0x53, 0xfa, 0x82, 0x00, 0x90, 0x80, 0x10, 0xb2, 0x72,
  0xcc, 0x82, 0x00, 0x90, 0x80, 0x10, 0xb3, 0x72, 0xdb, 0x82, 0x18, 0x88,
  0x81, 0x00, 0xb3, 0x74, 0xdb, 0x83, 0x00, 0x98, 0x81, 0x01, 0xb0, 0x74,
  0xbd, 0x92, 0x10, 0x90, 0x80, 0x01, 0xb1, 0x73, 0xcd, 0x82, 0x00, 0x90,
  0x80, 0x01, 0xb0, 0x73, 0xbf, 0x81, 0x18, 0x80, 0x80, 0x00, 0xa1, 0x53,
  0xcd, 0x81, 0x10, 0x90, 0x80, 0x01, 0xb0, 0x73, 0xaf, 0x92, 0x18, 0x88,
  0x80, 0x01, 0xa0, 0x63, 0xbf, 0x81, 0x18, 0x88, 0x08, 0x10, 0xa8, 0x63,
  0xaf, 0x80, 0x28, 0x88, 0x08, 0x01, 0xa0, 0x54, 0xae, 0x91, 0x28, 0x88,
  0x80, 0x01, 0xa8, 0x64, 0x9f, 0x80, 0x28, 0x88, 0x08, 0x00, 0x8a, 0x62,
  0x8f, 0x80, 0x10, 0x88, 0x80, 0x00, 0x89, 0x44, 0x8f, 0x88, 0x28, 0x09,
  0x08, 0x10, 0x89, 0x53, 0x8f, 0xa1, 0x28, 0x88, 0x08, 0x00, 0x8a, 0x72,
  0x0f, 0x90, 0x28, 0x09, 0x08, 0x10, 0x99, 0x62, 0x0f, 0x90, 0x28, 0x88,
  0x08, 0x01, 0x9a, 0x54, 0x0e, 0x98, 0x39, 0x19, 0x1a, 0x28, 0x0b, 0x44,
  0x3f, 0xa8, 0x20, 0x88, 0x08, 0x00, 0x0b, 0x45, 0x2f, 0x98, 0x28, 0x09,
  0x00, 0x81, 0x8a, 0x36, 0x3f, 0xa8, 0x38, 0x09, 0x08, 0x01, 0x8a, 0x26,
  0x3d, 0xc8, 0x20, 0x09, 0x00, 0x81, 0x0b, 0x17, 0x3b, 0xf8, 0x11, 0x88,
  0x80, 0x00, 0x0b, 0x16, 0x3a, 0xf9, 0x11, 0x08, 0x80, 0x80, 0x09, 0x96,
  0x30, 0xf9, 0x01, 0x80, 0x80, 0x80, 0x08, 0xa5, 0x41, 0xf9, 0x82, 0x80,
  0x80, 0x80, 0x08, 0xb5, 0x33, 0xfa, 0x82, 0x80, 0x80, 0x91, 0x00, 0xc4,
  0x34, 0xea, 0x82, 0x08, 0x80, 0x80, 0x00, 0xc2, 0x63, 0xdb, 0x82, 0x00,
  0x90, 0x80, 0x10, 0xb0, 0x74, 0xae, 0x81, 0x18, 0x88, 0x08, 0x10, 0xa8,
  0x63, 0x9f, 0x91, 0x18, 0x08, 0x08, 0x00, 0x99, 0x63, 0x0f, 0x98, 0x28,
  0x08, 0x08, 0x01, 0x9b, 0x63, 0x1f, 0x98, 0x28, 0x09, 0x18, 0x00, 0x8b,
  0x53, 0x4f, 0x98, 0x28, 0x09, 0x19, 0x00, 0x0b, 0x44, 0x3f, 0xa8, 0x20,
  0x09, 0x08, 0x00, 0x0b, 0x44, 0x4d, 0xb8, 0x20, 0x09, 0x08, 0x10, 0x0b,
  0x27, 0x4b, 0xd9, 0x21, 0x88, 0x80, 0x81, 0x0c, 0x25, 0x4b, 0xd9, 0x21,
  0x89, 0x00, 0x81, 0x0b, 0x07, 0x39, 0xf9, 0x11, 0x88, 0x00, 0x80, 0x0a,
  0x87, 0x28, 0xe9, 0x02, 0x88, 0x08, 0x00, 0x09, 0xa7, 0x21, 0xf9, 0x02,
  0x90, 0x80, 0x80, 0x08, 0xa6, 0x21, 0xf9, 0x01, 0x08, 0x80, 0x80, 0x08,
  0xa5, 0x23, 0xfa, 0x82, 0x08, 0x80, 0x80, 0x00, 0xb5, 0x33, 0xfb, 0x83,
  0x80, 0x91, 0x80, 0x08, 0xc5, 0x33, 0xfa, 0x93, 0x08, 0x91, 0x88, 0x10,
  0xc4, 0x34, 0xea, 0x93, 0x08, 0x80, 0x80, 0x00, 0xc4, 0x34, 0xea, 0x93,
  0x08, 0x80, 0x80, 0x00, 0xb3, 0x73, 0xdb, 0x93, 0x00, 0x90, 0x80, 0x01,
  0xc2, 0x64, 0xbe, 0x81, 0x18, 0x80, 0x88, 0x01, 0xa0, 0x63, 0xaf, 0x91,
  0x10, 0x90, 0x08, 0x01, 0xa8, 0x63, 0x8f, 0x90, 0x29, 0x08, 0x08, 0x01,
  0x9a, 0x63, 0x1f, 0xa0, 0x28, 0x88, 0x19, 0x01, 0x8b, 0x62, 0x3f, 0xa8,
  0x38, 0x88, 0x08, 0x00, 0x0b, 0x45, 0x2e, 0xa8, 0x20, 0x88, 0x00, 0x80,
  0x0b, 0x37, 0x3d, 0xb9, 0x30, 0x09, 0x08, 0x00, 0x0c, 0x53, 0x4e, 0xa9,
  0x30, 0x88, 0x08, 0x81, 0x0a, 0x87, 0x4a, 0xd9, 0x20, 0x09, 0x18, 0x80,
  0x1a, 0x06, 0x39, 0xf9, 0x11, 0x88, 0x08, 0x80, 0x1a, 0x87, 0x39, 0xf9,
  0x11, 0x88, 0x08, 0x08, 0x19, 0x85, 0x30, 0xfa, 0x02, 0x88, 0x00, 0x90,
  0x18, 0xa7, 0x21, 0xf9, 0x01, 0x80, 0x80, 0x88, 0x19, 0x85, 0x30, 0xfa,
  0x02, 0x88, 0x00, 0x90, 0x19, 0x87, 0x20, 0xf9, 0x02, 0x88, 0x80, 0x88,
  0x18, 0x95, 0x31, 0xfa, 0x02, 0x88, 0x80, 0x88, 0x18, 0x97, 0x20, 0xf9,
  0x02, 0x88, 0x80, 0x80, 0x08, 0x95, 0x31, 0xfa, 0x83, 0x88, 0x80, 0x88,
  0x10, 0xa6, 0x32, 0xfa, 0x82, 0x88, 0x00, 0x88, 0x10, 0x8b, 0x73, 0xaf,
  0x81, 0x18, 0x81, 0x98, 0x81, 0xa4, 0x26, 0xca, 0x92, 0x00, 0x91, 0x88,
  0x00, 0xb4, 0x54, 0xbd, 0xa3, 0x08, 0x80, 0x09, 0x01, 0xa2, 0x73, 0xaf,
  0x91, 0x18, 0x80, 0x08, 0x81, 0xa1, 0x47, 0x9c, 0xa1, 0x28, 0x80, 0x88,
  0x01, 0xa0, 0x64, 0x8e, 0xa1, 0x10, 0x88, 0x08, 0x81, 0x98, 0x63, 0x0f,
  0xa0, 0x28, 0x80, 0x08, 0x81, 0x8a, 0x63, 0x1f, 0xa8, 0x38, 0x80, 0x09,
  0x00, 0x0b, 0x63, 0x2f, 0xa8, 0x20, 0x88, 0x19, 0x80, 0x1a, 0x36, 0x4c,
  0xc9, 0x21, 0x88, 0x18, 0x90, 0x1a, 0x25, 0x6a, 0xd9, 0x11, 0x88, 0x18,
  0x88, 0x1a, 0x25, 0x5a, 0xd9, 0x11, 0x88, 0x00, 0x90, 0x08, 0x06, 0x48,
  0xf9, 0x02, 0x88, 0x81, 0x98, 0x18, 0x84, 0x40, 0xea, 0x01, 0x08, 0x81,
  0x89, 0x00, 0x85, 0x51, 0xea, 0x82, 0x08, 0x81, 0x98, 0x01, 0xa4, 0x53,
  0xfa, 0x82, 0x08, 0x81, 0x98, 0x01, 0x89, 0x46, 0x8e, 0x88, 0x29, 0x00,
  0x08, 0x91, 0x00, 0x97, 0x19, 0xf0, 0x01, 0x90, 0x00, 0x98, 0x18, 0x24,
  0x3d, 0xd8, 0x11, 0x88, 0x19, 0x88, 0x18, 0x32, 0x7a, 0xda, 0x21, 0x88,
  0x00, 0x98, 0x19, 0x44, 0x6a, 0xd9, 0x11, 0x88, 0x00, 0x98, 0x19, 0x26,
  0x4a, 0xe9, 0x11, 0x88, 0x18, 0x98, 0x10, 0x85, 0x58, 0xe9, 0x01, 0x80,
  0x00, 0x99, 0x10, 0x84, 0x50, 0xea, 0x02, 0x88, 0x00, 0x89, 0x18, 0x86,
  0x31, 0xfa, 0x82, 0x08, 0x81, 0x98, 0x01, 0xa3, 0x72, 0xdb, 0x82, 0x08,
  0x01, 0x99, 0x02, 0xb4, 0x63, 0xdb, 0xa3, 0x00, 0x81, 0x8a, 0x83, 0x91,
  0x75, 0xad, 0x91, 0x18, 0x81, 0x89, 0x81, 0x80, 0x47, 0x8c, 0xa0, 0x28,
  0x80, 0x09, 0x91, 0x19, 0x46, 0x2e, 0xa8, 0x10, 0x08, 0x19, 0x90, 0x2a,
  0x36, 0x5b, 0xd9, 0x20, 0x88, 0x10, 0x99, 0x29, 0x14, 0x78, 0xda, 0x11,
  0x09, 0x10, 0x99, 0x10, 0x84, 0x51, 0xea, 0x82, 0x80, 0x81, 0x89, 0x82,
  0xa4, 0x45, 0xcc, 0x81, 0x00, 0x81, 0x89, 0x81, 0x80, 0x64, 0x9e, 0x90,
  0x28, 0x80, 0x09, 0x91, 0x19, 0x45, 0x1e, 0xa8, 0x20, 0x90, 0x29, 0xa0,
  0x29, 0x37, 0x3d, 0xc8, 0x28, 0x08, 0x18, 0xa0, 0x19, 0x35, 0x5b, 0xd9,
  0x11, 0x88, 0x10, 0x99, 0x10, 0x86, 0x58, 0xda, 0x02, 0x88, 0x01, 0x9a,
  0x18, 0x14, 0x70, 0xcb, 0x82, 0x08, 0x01, 0x99, 0x01, 0x94, 0x63, 0xdc,
  0x81, 0x00, 0x92, 0x89, 0x91, 0x85, 0x34, 0xcd, 0x91, 0x10, 0x91, 0x88,
  0x91, 0x00, 0x64, 0x8e, 0xa0, 0x28, 0x80, 0x19, 0x90, 0x83, 0x37, 0x0d,
  0xb0, 0x28, 0x88, 0x29, 0x90, 0x18, 0x55, 0x2d, 0xc8, 0x10, 0x08, 0x18,
  0x99, 0x29, 0x44, 0x4c, 0xc9, 0x11, 0x88, 0x10, 0x99, 0x18, 0x36, 0x49,
  0xea, 0x02, 0x88, 0x00, 0x89, 0x18, 0x06, 0x40, 0xea, 0x82, 0x08, 0x00,
  0x89, 0x00, 0x85, 0x34, 0xea, 0x92, 0x80, 0x81, 0x89, 0x92, 0x83, 0x64,
  0xae, 0xa1, 0x18, 0x00, 0x09, 0x91, 0x82, 0x56, 0x9c, 0xa0, 0x10, 0x80,
  0x08, 0xa1, 0x00, 0x55, 0x1d, 0xb9, 0x38, 0x08, 0x29, 0xa8, 0x01, 0x64,
  0x2d, 0xc8, 0x10, 0x88, 0x28, 0x99, 0x18, 0x46, 0x1a, 0xe9, 0x10, 0x08,
  0x18, 0x8a, 0x28, 0x16, 0x30, 0xfa, 0x82, 0x88, 0x01, 0x8a, 0x08, 0x34,
  0x60, 0xdb, 0x82, 0x00, 0x81, 0x99, 0x81, 0x04, 0x62, 0xcc, 0x91, 0x00,
  0x82, 0x8a, 0x90, 0x14, 0x71, 0xad, 0x90, 0x10, 0x81, 0x89, 0x91, 0x01,
  0x64, 0x8e, 0xa0, 0x18, 0x00, 0x19, 0x98, 0x01, 0x55, 0x0c, 0xb9, 0x28,
  0x00, 0x29, 0xa8, 0x18, 0x56, 0x2b, 0xe9, 0x10, 0x08, 0x18, 0x8a, 0x18,
  0x44, 0x49, 0xf9, 0x01, 0x88, 0x10, 0x8a, 0x00, 0x14, 0x50, 0xda, 0x92,
  0x80, 0x01, 0x8a, 0x92, 0x85, 0x44, 0xcc, 0x91, 0x00, 0x82, 0x89, 0xa1,
  0x83, 0x73, 0x9f, 0x98, 0x28, 0x81, 0x09, 0x98, 0x10, 0x54, 0x1d, 0xb9,
  0x20, 0x80, 0x28, 0xb9, 0x11, 0x55, 0x3c, 0xda, 0x11, 0x08, 0x10, 0xaa,
  0x10, 0x36, 0x48, 0xea, 0x82, 0x80, 0x01, 0x8b, 0x00, 0x15, 0x50, 0xcc,
  0x81, 0x00, 0x82, 0x99, 0x91, 0x03, 0x73, 0xbe, 0xa1, 0x18, 0x82, 0x09,
  0xb1, 0x02, 0x55, 0x0e, 0xa8, 0x10, 0x00, 0x19, 0xa8, 0x11, 0x37, 0x2b,
  0xf9, 0x11, 0x88, 0x28, 0x9a, 0x10, 0x25, 0x49, 0xea, 0x01, 0x08, 0x11,
  0x9a, 0x81, 0x13, 0x72, 0xcd, 0x81, 0x08, 0x82, 0x89, 0xa2, 0x02, 0x27,
  0x0d, 0xb0, 0x10, 0x80, 0x29, 0xa8, 0x12, 0x37, 0x2a, 0xfa, 0x11, 0x80,
  0x00, 0x9a, 0x18, 0x43, 0x78, 0xcb, 0x82, 0x08, 0x10, 0x8b, 0x81, 0x15,
  0x52, 0xcd, 0x91, 0x00, 0x82, 0x89, 0xa1, 0x03, 0x55, 0x8e, 0xa0, 0x10,
  0x80, 0x18, 0xb0, 0x02, 0x27, 0x2c, 0xc9, 0x10, 0x08, 0x28, 0x9a, 0x10,
  0x35, 0x69, 0xcb, 0x82, 0x00, 0x02, 0x9b, 0x92, 0x23, 0x73, 0xcd, 0xa1,
  0x10, 0x81, 0x09, 0xa0, 0x03, 0x65, 0x8d, 0xa8, 0x10, 0x81, 0x19, 0xa9,
  0x11, 0x37, 0x3a, 0xf9, 0x01, 0x88, 0x10, 0x8b, 0x10, 0x24, 0x51, 0xdc,
  0x81, 0x08, 0x02, 0x8a, 0xa1, 0x13, 0x55, 0x9e, 0x98, 0x10, 0x81, 0x08,
  0xa8, 0x02, 0x37, 0x1b, 0xda, 0x11, 0x08, 0x28, 0x9b, 0x10, 0x45, 0x48,
  0xea, 0x81, 0x00, 0x01, 0x9a, 0x80, 0x14, 0x62, 0xbe, 0x90, 0x18, 0x01,
  0x09, 0xa0, 0x02, 0x54, 0x1e, 0xb8, 0x10, 0x08, 0x28, 0xa9, 0x01, 0x45,
  0x4a, 0xda, 0x82, 0x80, 0x11, 0x9b, 0x81, 0x25, 0x61, 0xcc, 0x91, 0x00,
  0x01, 0x0a, 0x90, 0x03, 0x64, 0x9d, 0xa8, 0x18, 0x01, 0x18, 0xb8, 0x02,
  0x47, 0x1a, 0xda, 0x10, 0x00, 0x10, 0x9b, 0x00, 0x44, 0x50, 0xdb, 0x92,
  0x81, 0x82, 0x8a, 0xa0, 0x24, 0x72, 0xad, 0xa0, 0x10, 0x81, 0x08, 0xb8,
  0x03, 0x64, 0x1d, 0xb9, 0x01, 0x00, 0x28, 0xaa, 0x00, 0x55, 0x39, 0xeb,
  0x82, 0x80, 0x11, 0x9a, 0x90, 0x36, 0x51, 0xbe, 0x90, 0x18, 0x02, 0x89,
  0xa8, 0x13, 0x63, 0x8e, 0xa9, 0x10, 0x00, 0x29, 0xa9, 0x01, 0x64, 0x2a,
  0xf9, 0x81, 0x00, 0x00, 0x8a, 0x80, 0x34, 0x60, 0xbd, 0x90, 0x01, 0x82,
  0x89, 0xa1, 0x12, 0x17, 0x2b, 0xf9, 0x10, 0x08, 0x10, 0x8b, 0x92, 0x45,
  0x29, 0xda, 0x91, 0x01, 0x01, 0x9b, 0x90, 0x37, 0x50, 0xad, 0x90, 0x00,
  0x01, 0x09, 0xa8, 0x04, 0x45, 0x8c, 0xb9, 0x10, 0x18, 0x38, 0xbb, 0x82,
  0x74, 0x29, 0xea, 0x81, 0x00, 0x01, 0x8b, 0x90, 0x37, 0x31, 0xcc, 0xa1,
  0x00, 0x02, 0x89, 0xc0, 0x85, 0x35, 0x9c, 0xaa, 0x28, 0x10, 0x29, 0xaa,
  0x83, 0x75, 0x1a, 0xd9, 0x81, 0x80, 0x10, 0x8a, 0x88, 0x44, 0x50, 0xcb,
  0xa1, 0x01, 0x82, 0x0a, 0xa9, 0x17, 0x34, 0x9d, 0xa9, 0x18, 0x11, 0x19,
  0xa9, 0x94, 0x54, 0x1a, 0xea, 0x00, 0x10, 0x00, 0x8a, 0x98, 0x46, 0x30,
  0xcc, 0xa1, 0x01, 0x01, 0x89, 0xb9, 0x17, 0x42, 0x9d, 0xa9, 0x10, 0x10,
  0x00, 0xa9, 0x93, 0x65, 0x1b, 0xca, 0x81, 0x01, 0x00, 0x8b, 0x98, 0x73,
  0x40, 0xcc, 0x90, 0x01, 0x01, 0x89, 0xa9, 0x17, 0x33, 0xae, 0xa9, 0x10,
  0x10, 0x00, 0xaa, 0x94, 0x55, 0x0a, 0xca, 0x81, 0x01, 0x00, 0x0b, 0xa9,
  0x73, 0x58, 0xbc, 0xa1, 0x01, 0x01, 0x89, 0xaa, 0x17, 0x51, 0x9c, 0xa9,
  0x28, 0x10, 0x18, 0xaa, 0x94, 0x64, 0x0a, 0xd9, 0x81, 0x00, 0x00, 0x89,
  0xa8, 0x55, 0x38, 0xdb, 0x91, 0x01, 0x82, 0x89, 0xa9, 0x17, 0x42, 0xad,
  0xa9, 0x28, 0x11, 0x08, 0xaa, 0x95, 0x54, 0x0b, 0xca, 0x00, 0x10, 0x18,
  0x8b, 0x90, 0x74, 0x28, 0xe9, 0x91, 0x81, 0x81, 0x09, 0xb8, 0x37, 0x31,
  0xbe, 0x98, 0x10, 0x00, 0x08, 0xa9, 0x85, 0x53, 0x8d, 0xb9, 0x10, 0x18,
  0x28, 0x9b, 0x92, 0x75, 0x1a, 0xca, 0x81, 0x00, 0x10, 0x8a, 0xa8, 0x55,
  0x48, 0xbc, 0x90, 0x01, 0x81, 0x88, 0xa9, 0x07, 0x51, 0x9c, 0xa9, 0x20,
  0x08, 0x10, 0xab, 0x95, 0x54, 0x0b, 0xca, 0x00, 0x10, 0x10, 0x8b, 0xb1,
  0x75, 0x18, 0xd9, 0x91, 0x00, 0x81, 0x09, 0xaa, 0x45, 0x40, 0xbc, 0xa0,
  0x10, 0x00, 0x18, 0xac, 0x15, 0x52, 0x9d, 0x9a, 0x28, 0x00, 0x10, 0x9a,
  0xa4, 0x73, 0x8b, 0xca, 0x01, 0x00, 0x10, 0x8a, 0xb0, 0x74, 0x28, 0xe9,
  0x91, 0x81, 0x81, 0x09, 0xaa, 0x45, 0x58, 0xab, 0xa0, 0x18, 0x01, 0x18,
  0xbb, 0x17, 0x51, 0x8d, 0x99, 0x18, 0x00, 0x10, 0x9a, 0x92, 0x74, 0x0a,
  0xca, 0x00, 0x10, 0x00, 0x0a, 0xc8, 0x64, 0x28, 0xda, 0x91, 0x00, 0x00,
  0x08, 0xaa, 0x27, 0x41, 0xad, 0x98, 0x10, 0x80, 0x18, 0x8a, 0x03, 0x26,
  0x00, 0xf9, 0x92, 0x82, 0x90, 0x88, 0xb0, 0x27, 0x41, 0xcb, 0xa1, 0x01,
  0x91, 0x00, 0xab, 0x26, 0x70, 0x8c, 0x99, 0x28, 0x00, 0x00, 0x9a, 0x94,
  0x54, 0x0b, 0xd9, 0x01, 0x08, 0x00, 0x0a, 0xa0, 0x64, 0x39, 0xe9, 0x91,
  0x81, 0x81, 0x88, 0xa9, 0x26, 0x50, 0x9d, 0x98, 0x10, 0x08, 0x18, 0x9a,
  0x04, 0x53, 0x0e, 0xa9, 0x01, 0x08, 0x00, 0x89, 0x91, 0x65, 0x19, 0xda,
  0x81, 0x18, 0x80, 0x19, 0xa9, 0x37, 0x40, 0xbc, 0xa1, 0x01, 0x80, 0x00,
  0xaa, 0x07, 0x51, 0x9c, 0xa9, 0x20, 0x09, 0x10, 0x8a, 0x93, 0x75, 0x0a,
  0xd9, 0x01, 0x08, 0x80, 0x1a, 0x98, 0x55, 0x28, 0xda, 0x91, 0x01, 0x91,
  0x80, 0xb8, 0x27, 0x40, 0xac, 0xa8, 0x20, 0x88, 0x18, 0x8c, 0x14, 0x71,
  0x8c, 0xa9, 0x10, 0x18, 0x00, 0x89, 0xa3, 0x66, 0x0a, 0xc9, 0x81, 0x00,
  0x81, 0x89, 0xa1, 0x37, 0x30, 0xea, 0x91, 0x18, 0x08, 0x08, 0xa8, 0x27,
  0x40, 0x9d, 0xa0, 0x18, 0x08, 0x10, 0x9a, 0x04, 0x71, 0x0c, 0xb9, 0x11,
  0x08, 0x00, 0x0b, 0xa3, 0x75, 0x09, 0xd9, 0x00, 0x00, 0x80, 0x09, 0x90,
  0x37, 0x28, 0xcb, 0xa1, 0x11, 0x91, 0x08, 0xaa, 0x37, 0x70, 0x9c, 0x98,
  0x10, 0x08, 0x00, 0x8a, 0x03, 0x72, 0x0d, 0xaa, 0x11, 0x08, 0x00, 0x8a,
  0x94, 0x54, 0x1b, 0xda, 0x82, 0x80, 0x00, 0x09, 0xa1, 0x47, 0x28, 0xcb,
  0xa1, 0x10, 0x08, 0x18, 0xa9, 0x37, 0x51, 0xad, 0xa0, 0x01, 0x80, 0x80,
  0x8b, 0x15, 0x61, 0x8c, 0xa9, 0x01, 0x08, 0x00, 0x8a, 0x83, 0x75, 0x0a,
  0xca, 0x82, 0x08, 0x81, 0x88, 0xa1, 0x57, 0x18, 0xca, 0x90, 0x10, 0x08,
  0x00, 0xb8, 0x37, 0x40, 0xad, 0x98, 0x10, 0x08, 0x08, 0x99, 0x24, 0x71,
  0x8c, 0xaa, 0x11, 0x08, 0x08, 0x0a, 0x03, 0x74, 0x0b, 0xca, 0x81, 0x01,
  0x80, 0x89, 0xb3, 0x67, 0x19, 0xbb, 0x91, 0x01, 0x80, 0x08, 0xc0, 0x37,
  0x32, 0xdb, 0xb0, 0x11, 0x09, 0x18, 0x8b, 0x26, 0x71, 0x8c, 0xa9, 0x01,
  0x00, 0x80, 0x8a, 0x83, 0x74, 0x0b, 0xca, 0x01, 0x00, 0x80, 0x88, 0xb3,
  0x57, 0x18, 0xca, 0xa1, 0x10, 0x80, 0x08, 0x98, 0x37, 0x40, 0xbc, 0xa8,
  0x11, 0x80, 0x80, 0x9a, 0x37, 0x51, 0x9c, 0xaa, 0x10, 0x18, 0x80, 0x8a,
  0x04, 0x73, 0x0b, 0xcb, 0x00, 0x18, 0x80, 0x09, 0xa4, 0x56, 0x19, 0xd9,
  0x90, 0x01, 0x80, 0x88, 0x91, 0x37, 0x30, 0xcb, 0xb8, 0x11, 0x08, 0x08,
  0x8b, 0x45, 0x61, 0x8d, 0xa9, 0x10, 0x08, 0x00, 0x99, 0x14, 0x62, 0x0b,
  0xda, 0x00, 0x18, 0x08, 0x0a, 0x94, 0x37, 0x29, 0xda, 0x91, 0x01, 0x89,
  0x19, 0x91, 0x37, 0x40, 0xbc, 0xb0, 0x11, 0x80, 0x80, 0xa8, 0x36, 0x52,
  0x9d, 0xb9, 0x02, 0x00, 0x89, 0x0a, 0x13, 0x74, 0x1b, 0xda, 0x81, 0x10,
  0x88, 0x88, 0x93, 0x37, 0x48, 0xda, 0x90, 0x10, 0x08, 0x88, 0x98, 0x46,
  0x30, 0xbd, 0xa8, 0x01, 0x00, 0x09, 0x8a, 0x27, 0x42, 0x9c, 0xba, 0x01,
  0x18, 0x08, 0x0a, 0x84, 0x73, 0x1b, 0xdb, 0x80, 0x28, 0x19, 0x0a, 0x83,
  0x66, 0x18, 0xcb, 0xa1, 0x01, 0x08, 0x09, 0xa1, 0x37, 0x51, 0xbb, 0xc8,
  0x02, 0x08, 0x88, 0x8a, 0x34, 0x72, 0x8c, 0xba, 0x01, 0x10, 0x89, 0x89,
  0x13, 0x75, 0x09, 0xca, 0x90, 0x10, 0x09, 0x88, 0x94, 0x37, 0x20, 0xcb,
  0xb8, 0x12, 0x09, 0x09, 0x8a, 0x65, 0x31, 0x9e, 0xa9, 0x01, 0x00, 0x98,
  0x89, 0x24, 0x71, 0x1a, 0xdb, 0x00, 0x10, 0x80, 0x99, 0x84, 0x45, 0x18,
  0xcb, 0xb1, 0x02, 0x80, 0xa0, 0xa1, 0x65, 0x21, 0x9e, 0xa9, 0x00, 0x10,
  0x89, 0x0a, 0x34, 0x71, 0x0a, 0xcb, 0x80, 0x20, 0x1a, 0x98, 0x03, 0x74,
  0x08, 0xca, 0xb0, 0x02, 0x19, 0x89, 0xa2, 0x66, 0x20, 0xad, 0xa8, 0x82,
  0x08, 0x08, 0xa9, 0x43, 0x71, 0x0c, 0xab, 0x81, 0x11, 0x88, 0x9a, 0x14,
  0x55, 0x18, 0xda, 0xa0, 0x11, 0x80, 0xa0, 0xa3, 0x37, 0x31, 0xad, 0xc8,
  0x81, 0x00, 0x80, 0xa0, 0x26, 0x51, 0x8b, 0xcb, 0x00, 0x12, 0x98, 0x9a,
  0x14, 0x72, 0x19, 0xcb, 0xa0, 0x10, 0x19, 0x09, 0x91, 0x66, 0x20, 0xbc,
  0xb9, 0x12, 0x19, 0x88, 0xa0, 0x27, 0x43, 0x9a, 0xea, 0x80, 0x11, 0x0a,
  0x0a, 0x03, 0x72, 0x28, 0xdb, 0x99, 0x11, 0x29, 0x8a, 0x90, 0x74, 0x21,
  0x9e, 0xa9, 0x81, 0x11, 0x98, 0xa9, 0x27, 0x33, 0x89, 0xfa, 0x80, 0x18,
  0x19, 0x0a, 0x92, 0x73, 0x28, 0xbd, 0xa8, 0x01, 0x08, 0x80, 0xb0, 0x46,
  0x41, 0x9b, 0xca, 0x92, 0x00, 0x0a, 0x1c, 0x22, 0x73, 0x2a, 0xbf, 0x89,
  0x11, 0x80, 0x88, 0xa1, 0x44, 0x40, 0x9c, 0xba, 0x01, 0x11, 0x98, 0xba,
  0x37, 0x52, 0x09, 0xcb, 0x98, 0x03, 0x91, 0xab, 0xa4, 0x63, 0x30, 0xbc,
  0xe8, 0x00, 0x18, 0x1a, 0x8b, 0x35, 0x52, 0x0a, 0xda, 0x88, 0x02, 0x81,
  0xa9, 0xb5, 0x35, 0x21, 0xbd, 0xaa, 0x01, 0x00, 0x09, 0x0d, 0x33, 0x72,
  0x09, 0xda, 0x90, 0x10, 0x80, 0x99, 0xa3, 0x64, 0x21, 0x9d, 0xb9, 0x81,
  0x20, 0x8b, 0x99, 0x07, 0x43, 0x1b, 0xbc, 0x9a, 0x18, 0x31, 0x8b, 0xe2,
  0x27, 0x21, 0xaa, 0xb9, 0xa1, 0x81, 0x08, 0x0f, 0x02, 0x62, 0x29, 0xac,
  0xa9, 0x18, 0x11, 0x89, 0xd8, 0x35, 0x43, 0x8a, 0xcc, 0x0a, 0x2a, 0x10,
  0x89, 0xb5, 0x27, 0x11, 0x9b, 0xaa, 0x80, 0x88, 0x10, 0xc9, 0x87, 0x42,
  0x2a, 0xbb, 0xab, 0x39, 0x10, 0x2b, 0xf8, 0x35, 0x33, 0x0c, 0xbc, 0x89,
  0x2b, 0x39, 0x2c, 0x93, 0x64, 0x11, 0xaa, 0xbb, 0x98, 0x01, 0x0a, 0xc9,
  0x17, 0x61, 0x3a, 0x9a, 0xd8, 0x80, 0x81, 0x89, 0x9c, 0x61, 0x40, 0x2b,
  0xa9, 0xb2, 0xb8, 0x04, 0xa9, 0xc1, 0x63, 0x22, 0xaa, 0xc8, 0x9b, 0x80,
  0x82, 0xac, 0x97, 0x26, 0x00, 0x8b, 0x8c, 0x1a, 0x00, 0x01, 0xbc, 0x13,
  0x71, 0x39, 0x8a, 0xc8, 0xd1, 0xa2, 0x90, 0x10, 0x60, 0x39, 0x20, 0x9a,
  0xfa, 0x92, 0x84, 0xac, 0x08, 0x71, 0x18, 0x90, 0xa0, 0xa9, 0xa1, 0x05,
  0xba, 0x10, 0x70, 0x3a, 0x09, 0x98, 0x90, 0xe1, 0x91, 0x9a, 0x96, 0x32,
  0x19, 0x89, 0x0b, 0xbb, 0xe3, 0x98, 0xa8, 0x37, 0x31, 0x94, 0xa0, 0x9e,
  0x98, 0xa2, 0x8a, 0x49, 0x42, 0x80, 0x85, 0x91, 0xba, 0x9f, 0x00, 0x91,
  0x0a, 0x70, 0x29, 0x10, 0x02, 0xcb, 0x9d, 0x19, 0x82, 0x86, 0x83, 0xa0,
  0x12, 0x3e, 0x1d, 0x8b, 0x08, 0x20, 0x03, 0x94, 0x98, 0x22, 0x6b, 0x8d,
  0x90, 0xb1, 0x97, 0x92, 0x00, 0x98, 0x32, 0x3c, 0x9a, 0xcb, 0xa8, 0x38,
  0x69, 0x13, 0xb2, 0x26, 0x80, 0xc8, 0xd0, 0xb0, 0x82, 0x13, 0x10, 0x80,
  0x34, 0x25, 0xdb, 0x9a, 0xd5, 0xb4, 0xa2, 0x92, 0x89, 0x38, 0x79, 0x0b,
  0x88, 0xa0, 0xa2, 0x80, 0x58, 0x01, 0xb4, 0x20, 0x2e, 0x2c, 0x99, 0xaa,
  0x51, 0x10, 0x19, 0xa4, 0x83, 0x2e, 0xa1, 0x80, 0x8d, 0x8b, 0x70, 0x18,
  0x89, 0x11, 0x28, 0xaa, 0x83, 0xb0, 0xcf, 0x12, 0x14, 0xa9, 0x91, 0x20,
  0x8a, 0x80, 0x80, 0x8d, 0x0e, 0x79, 0x10, 0x90, 0x12, 0xb9, 0xac, 0x32,
  0x8a, 0x80, 0xe5, 0x08, 0x01, 0x3b, 0x4f, 0x8a, 0x29, 0x84, 0x91, 0x90,
  0x1a, 0x7a, 0x39, 0x8e, 0x2a, 0x11, 0x0a, 0x28, 0x02, 0xb0, 0x3b, 0x3f,
  0x8b, 0x97, 0xa3, 0x91, 0x80, 0x2a, 0x2b, 0x3f, 0x1b, 0x4c, 0x2a, 0x49,
  0x29, 0x0a, 0x28, 0xa5, 0x9a, 0xb0, 0x80, 0x71, 0x92, 0xa0, 0x80, 0xbd,
  0x69, 0x29, 0x08, 0x94, 0xa0, 0x8d, 0x2b, 0x5b, 0x49, 0x18, 0x19, 0x0a,
  0xc5, 0xb5, 0xb2, 0x91, 0x19, 0x0d, 0x5a, 0x19, 0x08, 0xa6, 0xa1, 0x00,
  0x90, 0x19, 0x82, 0xa0, 0xb0, 0x38, 0x40, 0xc0, 0x8c, 0x79, 0x89, 0x19,
  0x82, 0x08, 0x04, 0xb8, 0x4f, 0x01, 0x19, 0x80, 0xf3, 0x89, 0x21, 0xa0,
  0x8a, 0x03, 0x80, 0x80, 0xe3, 0x3b, 0x88, 0xc8, 0x52, 0xb0, 0x8f, 0x14,
  0xb1, 0xd4, 0x91, 0x89, 0x01, 0x08, 0x2d, 0x19, 0x2b, 0x30, 0xf3, 0x82
};

unsigned int __meow_smol_ima_len = 4464;


unsigned char background[] =
{
  0x4E,0x00,0x08,0x00,0x4A,0x00,0x0A,0x00,
  0x68,0x00,0x0A,0x00,0x48,0x00,0x00,0x00
};

unsigned char kot[] =
{
  0x20,0x20,0x31,0x31,0x3F,0x3F,0x39,0x27,
  0x3D,0x23,0x3F,0x21,0x3F,0x20,0x3F,0x3F,
  0x0F,0x08,0x0F,0x08,0x0F,0x0C,0x07,0x07,
  0x0D,0x0D,0x19,0x19,0x31,0x31,0x21,0x21,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x81,0x81,0xFB,0xFB,0x8C,0xFC,0x86,0xFE,
  0xC2,0x3E,0xE6,0x1E,0xE6,0x1E,0xFE,0xDE,
  0x73,0x73,0x11,0x11,0x11,0x11,0x19,0x19,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x81,0x81,0xDF,0xDF,0x31,0x3F,0x61,0x7F,
  0x43,0x7C,0x67,0x78,0x67,0x78,0x7F,0x7B,
  0xCE,0xCE,0x88,0x88,0x88,0x88,0x98,0x98,
  0x04,0x04,0x8C,0x8C,0xFC,0xFC,0x9C,0xE4,
  0xBC,0xC4,0xFC,0x84,0xFC,0x04,0xFC,0xFC,
  0xF0,0x10,0xF0,0x10,0xF0,0x30,0xE0,0xE0,
  0xB0,0xB0,0x98,0x98,0x8C,0x8C,0x84,0x84,
  0x00,0x00,0x8B,0x8B,0xDA,0xDA,0xAB,0xAB,
  0x8A,0x8A,0x8B,0x8B,0x00,0x00,0x00,0x00,
  0x00,0x00,0xDD,0xDD,0x15,0x15,0xD5,0xD5,
  0x15,0x15,0xDD,0xDD,0x00,0x00,0x00,0x00,
  0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,
  0x50,0x50,0xB0,0xB0,0x00,0x00,0x00,0x00
};

#define CATL 0
#define CATL_SPRITE_TOP_LEFT 0
#define CATL_SPRITE_BOTTOM_LEFT 1
#define CATL_SPRITE_TOP_RIGHT 2
#define CATL_SPRITE_BOTTOM_RIGHT 3

#define CATR 4
#define CATR_SPRITE_TOP_LEFT 4
#define CATR_SPRITE_BOTTOM_LEFT 5
#define CATR_SPRITE_TOP_RIGHT 6
#define CATR_SPRITE_BOTTOM_RIGHT 7

#define MEOW_0 8
#define MEOW_1 9
#define MEOW_2 10


#define LEFT 0
#define RIGHT 1

void move_quarduple_sprite(UBYTE sprite_index, UBYTE x, UBYTE y) {
  move_sprite(sprite_index, x, y);
  move_sprite(sprite_index+1, x, y+8);
  move_sprite(sprite_index+2, x+8, y);
  move_sprite(sprite_index+3, x+8, y+8);
}
void move_catl(UBYTE x, UBYTE y) {
  move_quarduple_sprite(CATL, x, y);
}

void move_catr(UBYTE x, UBYTE y) {
  move_quarduple_sprite(CATR, x, y);
}

void move_cat(UBYTE x, UBYTE y, UBYTE current_dir) {
  if (current_dir == LEFT) {
    move_catr(0, 0);
    move_catl(x, y);
  } else {
    move_catl(0, 0);
    move_catr(x, y);
  }
  return;
}

void move_meow(UBYTE x, UBYTE y) {
  move_sprite(MEOW_0, x, y);
  move_sprite(MEOW_1, x+8, y);
  move_sprite(MEOW_2, x+16, y);
}

void show_meow_next_to_cat(UBYTE x, UBYTE y, UBYTE current_dir) {
  if (current_dir == LEFT) {
    move_meow(x-8, y-8);
  } else {
    move_meow(x+16, y-8);
  }
}

void play_meow() {

  NR52_REG = 0x80; // enable sound
  NR51_REG = 0x11; // chan 1 to left, chan 1 to right
  NR50_REG = 0x77; // max volume (what do 4th and 8th bits do?)
  
  NR10_REG = 0x7E; // 0001 1110
  NR11_REG = 0x01; //0x10;
  NR12_REG = 0xF3; //0xF3; // 1111 1011
  NR13_REG = 0xFF;
  NR14_REG = 0x87;
 
}

void play_part2() {
  play_sample(__meow_smol_ima, 279);
}

void hide_meow() {
  move_meow(0, 0);
}

void main()
{
  UBYTE counter,x,y,step,current_dir;
  current_dir=RIGHT;
  x=40;
  y=40;
  step=8;
  disable_interrupts();
  DISPLAY_OFF;
  
  // load background
  set_bkg_data(0,1,background);
  
  // load sprite
  SPRITES_8x8;
  set_sprite_data(0, 11, kot);

  set_sprite_tile(CATL_SPRITE_TOP_LEFT,0);
  set_sprite_tile(CATL_SPRITE_BOTTOM_LEFT,1);
  set_sprite_tile(CATL_SPRITE_TOP_RIGHT,2);
  set_sprite_tile(CATL_SPRITE_BOTTOM_RIGHT,3);
  
  set_sprite_tile(CATR_SPRITE_TOP_LEFT,4);
  set_sprite_tile(CATR_SPRITE_BOTTOM_LEFT,5);
  set_sprite_tile(CATR_SPRITE_TOP_RIGHT,6);
  set_sprite_tile(CATR_SPRITE_BOTTOM_RIGHT,7);

  set_sprite_tile(MEOW_0, 8);
  set_sprite_tile(MEOW_1, 9);
  set_sprite_tile(MEOW_2, 10);
	
  move_cat(x, y, current_dir);

  SHOW_BKG;
  SHOW_SPRITES; 
  DISPLAY_ON;
  enable_interrupts();
  
  while(1) {
    /* Skip four VBLs (slow down animation) */
    for(counter = 0; counter < 8; counter++){
      wait_vbl_done();
    }
    
    counter = joypad();
    if(counter & (J_UP | J_DOWN | J_LEFT | J_RIGHT)) {
      // hide_meow();
    }
    if(counter & J_UP)
      y-=step;
    if(counter & J_DOWN)
      y+=step;
    if(counter & J_LEFT) {
      current_dir = LEFT;
      x-=step;
    }
    if(counter & J_RIGHT) {
      current_dir = RIGHT;
      x+=step;
    }
    if(counter & J_A) {
      show_meow_next_to_cat(x,y, current_dir);
      play_part2();
      delay(300);
      hide_meow();
    }
    move_cat(x,y, current_dir);
    // waitpadup();
  }
}
