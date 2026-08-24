	@ pret/pokeemerald-jp direct xref for 0x0890ED54: agb_flash.s: IdentifyFlash
	.globl gAgbFlashData_0890ED54
gAgbFlashData_0890ED54: @ 0x0890ED54
	@ analyzed canonical ROM range 0x0890ED54-0x0890EEA3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: SOURCE_RANGE addr=0x0890ED54 size=0xC
	.byte 0xA0, 0xED, 0x90, 0x08, 0x3C, 0xEE, 0x90, 0x08, 0xD0, 0xED, 0x90, 0x08
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED60 size=0x4 source=v54_multi_pointer
	.4byte gAgbFlashData_0890ED54
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED64 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075F4
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED68 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075EC
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED6C size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075FC
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED70 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03007600
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED74 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075E8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED78 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03007604
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED7C size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075F0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED80 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075E4
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890ED84 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_030075E0
	@ Flash write timeout table used by MX29L010 and DefaultFlash.
	.globl mxMaxTime
mxMaxTime:
	.2byte 0x000A, 0xFFBD, 0x00C2, 0x000A, 0xFFBD, 0x00C2, 0x07D0, 0xFFBD @ +0x0
	.2byte 0x00C2, 0x07D0, 0xFFBD, 0x00C2 @ +0x10
	@ struct FlashSetupInfo for Macronix MX29L010 (maker=0xC2, device=0x09).
	.globl MX29L010
MX29L010:
	@ programFlashByte
	.4byte ProgramFlashByte_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDA4 size=0x4 source=v54_multi_pointer
	.4byte ProgramFlashSector_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDA8 size=0x4 source=v54_multi_pointer
	.4byte EraseFlashChip_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDAC size=0x4 source=v54_multi_pointer
	.4byte EraseFlashSector_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDB0 size=0x4 source=v54_multi_pointer
	.4byte WaitForFlashWrite_Common
	.4byte mxMaxTime @ maxTime
	.4byte 0x00020000 @ type.romSize = 131072
