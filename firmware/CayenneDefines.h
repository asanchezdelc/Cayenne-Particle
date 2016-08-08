/*
The MIT License(MIT)

Cayenne Arduino Client Library
Copyright 2016 myDevices

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
documentation files(the "Software"), to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense, and / or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so, subject to the following conditions :
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

This software uses open source blynk-library - see blynk-library/LICENSE
*/

#ifndef _CAYENNEDEFINES_h
#define _CAYENNEDEFINES_h

#include "CayenneTypes.h"

#define CAYENNE_DOMAIN "arduino.mydevices.com"
#define CAYENNE_PORT 8442

// Macro redirection
#define CAYENNE_CONNECTED     BLYNK_CONNECTED
#define CAYENNE_DISCONNECTED  BLYNK_DISCONNECTED
#define CAYENNE_IN            BLYNK_IN
#define CAYENNE_OUT           BLYNK_OUT
#define CAYENNE_LOG           BLYNK_LOG
#ifdef CAYENNE_DEBUG
#define BLYNK_DEBUG
#endif
#ifdef CAYENNE_PRINT
#define BLYNK_PRINT           CAYENNE_PRINT
#endif

#endif
