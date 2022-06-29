/*---------------------------------------------------------------------------*
 * Author  : Star
 * Date    : 28 Jun 2022
 * File    : GXStruct.h
 * Version : 1.0.0.0
 *---------------------------------------------------------------------------*/

#ifndef __GXSTRUCT_H__
#define __GXSTRUCT_H__

//! Typedefs
typedef struct GXColor_t
{
    unsigned char r; // The red   component of the colour
    unsigned char g; // The green component of the colour
    unsigned char b; // The blue  component of the colour
    unsigned char a; // The alpha component of the colour
} GXColor;

#endif // __GXSTRUCT_H__