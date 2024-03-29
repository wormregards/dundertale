////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
// ImageAsCode exporter v1.0 - Image pixel data exported as an array of bytes         //
//                                                                                    //
// more info and bugs-report:  github.com/raysan5/raylib                              //
// feedback and support:       ray[at]raylib.com                                      //
//                                                                                    //
// Copyright (c) 2018-2023 Ramon Santamaria (@raysan5)                                //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

// Image data information
#define PLAYERSPRITE_WIDTH    30
#define PLAYERSPRITE_HEIGHT   30
#define PLAYERSPRITE_FORMAT   7          // raylib internal pixel format

static unsigned char PLAYERSPRITE_DATA[3600] = { 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe,
0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
