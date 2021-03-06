#pragma once

namespace Images {

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Chain_Long[] = {
    8, 40,
    0x04, 0x0a, 0x35, 0xc2, 0x3f, 0xc0, 0x3e, 0xc1, 
    0x00, 0x80, 0x66, 0x99, 0xe6, 0x19, 0xa6, 0x79, 
    0x01, 0x02, 0x8d, 0x70, 0x8f, 0x70, 0x8f, 0x72, 
    0x00, 0x00, 0x61, 0x9e, 0x61, 0x9e, 0x61, 0x9e, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x00, 
    };
    #else
    const uint8_t PROGMEM Title_Chain_Long[] = {
    0x01 ,0x01, 0x01
    };
    #endif 

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Chain_Short[] = {
    6, 16,
    0x63, 0x9c, 0x63, 0x9c, 0x63, 0x9c, 
    0x18, 0x27, 0x58, 0xa7, 0x58, 0x27, 
    };
    #else
    const uint8_t PROGMEM Title_Chain_Short[] = {
    0x01 ,0x01, 0x01
    };
    #endif 

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Game[] = {
    18, 8,
    0x0e, 0x11, 0x15, 0x1d, 0x00, 0x1e, 0x05, 0x05, 0x1e, 0x00, 0x1f, 0x06, 0x02, 0x1f, 0x00, 0x1f, 0x15, 0x11, 
    };
    #else
    const uint8_t PROGMEM Title_Game[] = {
    0x01 ,0x01, 0x01
    };
    #endif 

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Kong_Arm_Left[] = {
    30, 31,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x10, 0x08, 0x08, 0x04, 0x84, 0x04, 0x02, 0x02, 0x02, 0x02, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xc6, 0x01, 0x11, 0xc4, 0xe2, 0xf2, 0x1a, 0x0a, 0xe0, 0xf0, 0xf8, 0xfa, 0xfd, 0xb6, 0xf5, 0xf2, 0xb4, 0x84, 0x78, 
    0x00, 0x00, 0x80, 0x40, 0x20, 0x50, 0xd0, 0x20, 0x00, 0x00, 0x80, 0x51, 0xaa, 0x84, 0x53, 0xc3, 0x2f, 0x28, 0x20, 0x27, 0x27, 0x2f, 0x5f, 0x5f, 0x55, 0x9f, 0x1f, 0x15, 0x01, 0x7e, 
    0x02, 0x05, 0x0a, 0x0a, 0x05, 0x03, 0x0a, 0x15, 0x12, 0x24, 0x5b, 0x2a, 0x11, 0x0d, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
    };
    #else
    const uint8_t PROGMEM Title_Kong_Arm_Left[] = {
    0x01 ,0x01, 0x01
    };
    #endif 

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Kong_Arm_Right[] = {
    31, 31,
    0x01, 0x01, 0x02, 0x02, 0x02, 0x04, 0x84, 0x04, 0x08, 0x08, 0x10, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xe0, 0x78, 0x84, 0xb4, 0xf2, 0xf5, 0xb6, 0xfd, 0xfa, 0xf8, 0xf0, 0xe0, 0x0a, 0x1a, 0xf2, 0xe2, 0xc4, 0x11, 0x01, 0xc6, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0x7e, 0x01, 0x15, 0x1f, 0x9f, 0x55, 0x5f, 0x5f, 0x2f, 0x27, 0x27, 0x20, 0x28, 0x2f, 0xc3, 0x53, 0x84, 0xaa, 0x51, 0x80, 0x00, 0x00, 0x20, 0xd0, 0x50, 0x20, 0x40, 0x80, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0d, 0x11, 0x2a, 0x5b, 0x24, 0x12, 0x15, 0x0a, 0x03, 0x05, 0x0a, 0x0a, 0x05, 0x02, 
    };
    #else
    const uint8_t PROGMEM Title_Kong_Arm_Right[] = {
    0x01 ,0x01, 0x01
    };
    #endif 

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Kong_Body[] = {
    44, 24,
    0x00, 0x00, 0x00, 0x80, 0x40, 0x27, 0x18, 0x40, 0x80, 0x01, 0x01, 0x3b, 0xff, 0xfd, 0xff, 0xfb, 0xfb, 0xf3, 0xf3, 0xf3, 0xfb, 0xfb, 0xff, 0xfb, 0xfb, 0xfb, 0xf3, 0xf3, 0xf3, 0xfb, 0xfb, 0xff, 0xfd, 0x0f, 0x03, 0x00, 0x80, 0x30, 0x4f, 0x80, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x80, 0x4f, 0xb0, 0xa0, 0xa0, 0x80, 0x80, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x03, 0x03, 0x07, 0x8f, 0x4f, 0x2f, 0x2f, 0x2f, 0x5f, 0x5f, 0x2f, 0x2f, 0x4f, 0x8f, 0x0f, 0x0f, 0x03, 0x01, 0x00, 0x00, 0x02, 0x01, 0x80, 0x80, 0x80, 0x80, 0x21, 0x5e, 0x80, 0x00, 
    0x03, 0x0c, 0x0b, 0x0b, 0x0a, 0x0a, 0x0b, 0x09, 0x0a, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x09, 0x0b, 0x0a, 0x0b, 0x0b, 0x0b, 0x0b, 0x0a, 0x09, 0x09, 0x0b, 0x0b, 0x0b, 0x0b, 0x04, 0x03, 
    };
    #else
    const uint8_t PROGMEM Title_Kong_Body[] = {
    0x01 ,0x01, 0x01
    };
    #endif 

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Kong_Head[] = {
    23, 25,
    0x04, 0x04, 0x04, 0xe4, 0x14, 0x08, 0x04, 0x04, 0xc2, 0x62, 0xa1, 0xa1, 0x41, 0xa1, 0xa2, 0x22, 0xc4, 0x0a, 0xf2, 0x04, 0x04, 0x08, 0x08, 
    0x0c, 0x1e, 0x8f, 0xe6, 0xf0, 0x78, 0x3c, 0x3c, 0x3f, 0x34, 0x79, 0xf8, 0xe8, 0xf0, 0xeb, 0xf8, 0xe7, 0xfe, 0xf8, 0xf2, 0x83, 0x1d, 0x0e, 
    0xfe, 0xf0, 0xf3, 0xef, 0xd8, 0xdb, 0xb7, 0xb5, 0x35, 0x37, 0x77, 0x76, 0x7a, 0x7d, 0x7d, 0x3d, 0xbb, 0xbb, 0xdb, 0xeb, 0xf3, 0xfc, 0xfc, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    };
    #else
    const uint8_t PROGMEM Title_Kong_Head[] = {
    0x01 ,0x01, 0x01
    };
    #endif 

    #ifndef DEBUG
    const uint8_t PROGMEM Title_Kong_II[] = {
    78, 16,
    0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x67, 0xf0, 0xff, 0xff, 0xff, 0x8f, 0x07, 0x07, 0x00, 0xf0, 0xfc, 0xfe, 0xfe, 0xe3, 0xd1, 0x19, 0x19, 0x51, 0xe3, 0xfe, 0xfe, 0xfc, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xbf, 0x7f, 0xfe, 0xfc, 0xf0, 0xe7, 0xff, 0xff, 0xff, 0x07, 0x00, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0x0f, 0x07, 0x07, 0xc7, 0xce, 0xdf, 0xdf, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 
    0x3e, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x3e, 0x00, 0x3f, 0x2f, 0x2f, 0x2f, 0x2f, 0x3e, 0x00, 0x07, 0x0b, 0x17, 0x17, 0x2f, 0x2f, 0x28, 0x28, 0x29, 0x2f, 0x17, 0x17, 0x0b, 0x07, 0x00, 0x3e, 0x2f, 0x2f, 0x2f, 0x3e, 0x03, 0x05, 0x0b, 0x17, 0x3f, 0x2f, 0x2f, 0x3f, 0x00, 0x00, 0x07, 0x0b, 0x17, 0x17, 0x2f, 0x2f, 0x2e, 0x2e, 0x2e, 0x2f, 0x17, 0x0b, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x3e, 0x00, 0x3e, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x3e, 
    };
    #else
    const uint8_t PROGMEM Title_Kong_II[] = {
    0x01 ,0x01, 0x01
    };
    #endif 
};
