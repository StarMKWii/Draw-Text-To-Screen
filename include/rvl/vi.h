/*---------------------------------------------------------------------------*
 * Author  : Star
 * Date    : 28 Jun 2022
 * File    : vi.h
 * Version : 1.0.0.0
 *---------------------------------------------------------------------------*/

#ifndef __VI_H__
#define __VI_H__

//! Definitions
#define VI_VTR_REG  (volatile unsigned int*)0xCC002000
#define VI_TFBL_REG (volatile unsigned int*)0xCC00201C
#define VI_HSW_REG  (volatile unsigned int*)0xCC002048

#define VI_TFBL_REG_PAGE_OFFSET_BIT (1 << 28)

#endif // __VI_H__