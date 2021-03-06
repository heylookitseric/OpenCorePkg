/** @file
  Copyright (c) 2020, PMheart. All rights reserved.
  SPDX-License-Identifier: BSD-3-Clause
**/

#include <Pcd.h>

#define _PCD_VALUE_PcdUefiLibMaxPrintBufferSize  320U
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
#define _PCD_VALUE_PcdDebugPropertyMask  2U
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0x80000002U
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000002U
#define _PCD_VALUE_PcdMaximumAsciiStringLength  0U
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)

const UINT32 _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize = _PCD_VALUE_PcdUefiLibMaxPrintBufferSize;
const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport = _PCD_VALUE_PcdUgaConsumeSupport;
const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
