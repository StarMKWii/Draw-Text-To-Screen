/*---------------------------------------------------------------------------*
 * Author  : Star
 * Date    : 28 Jun 2022
 * File    : debugPrint.h
 * Version : 1.0.0.0
 *---------------------------------------------------------------------------*/

#ifndef __DEBUGPRINT_H__
#define __DEBUGPRINT_H__

#include <rvl/gx.h>

#ifdef __cplusplus
extern "C"
{
#endif

//! Function Prototype Declarations

//! Public Functions
int  DebugPrint_Printf(int iCurrentRow, int iCurrentColumn, const char* pFormatString, ...);

void DebugPrint_SetForegroundColour(GXColor gxColor);
void DebugPrint_SetBackgroundColour(GXColor gxColor);

#ifdef __cplusplus
}
#endif

#endif // __DEBUGPRINT_H__