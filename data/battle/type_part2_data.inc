	.2byte 0x0000 @ type.sector.top
	.2byte 0x0000 @ alignment
	.2byte 0x0003, 0x0001 @ type.wait[2]
	.byte 0x00, 0x00 @ terminator maker/device ID
	.2byte 0x0000 @ alignment
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE00 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075F0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE04 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075E8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE08 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075F0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE0C size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075E8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE10 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075F0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE14 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075E8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE18 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075E8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE1C size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075F0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE20 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075F8
	@ Flash write timeout table used by LE26FV10N1TS.
	.globl leMaxTime
leMaxTime:
	.2byte 0x000A, 0xFFBD, 0x00C2, 0x000A, 0xFFBD, 0x00C2, 0x07D0, 0xFFBD @ +0x0
	.2byte 0x00C2, 0x07D0, 0xFFBD, 0x00C2 @ +0x10
	@ struct FlashSetupInfo for Sanyo LE26FV10N1TS (maker=0x62, device=0x13).
	.globl LE26FV10N1TS
LE26FV10N1TS:
	@ programFlashByte
	.4byte ProgramFlashByte_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE40 size=0x4 source=v54_multi_pointer
	.4byte ProgramFlashSector_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE44 size=0x4 source=v54_multi_pointer
	.4byte EraseFlashChip_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE48 size=0x4 source=v54_multi_pointer
	.4byte EraseFlashSector_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE4C size=0x4 source=v54_multi_pointer
	.4byte WaitForFlashWrite_Common
	.4byte leMaxTime @ maxTime
	.4byte 0x00020000 @ type.romSize = 131072
