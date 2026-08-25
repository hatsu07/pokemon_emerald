	.2byte 0x0000 @ type.sector.top
	.2byte 0x0000 @ alignment
	.2byte 0x0003, 0x0001 @ type.wait[2]
	.byte 0xC2, 0x09 @ type.ids.makerId/deviceId
	.2byte 0x0000 @ alignment
	@ struct FlashSetupInfo fallback entry; maker/device ID is zero terminator.
	.globl DefaultFlash
DefaultFlash:
	@ programFlashByte
	.4byte ProgramFlashByte_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDD4 size=0x4 source=v54_multi_pointer
	.4byte ProgramFlashSector_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDD8 size=0x4 source=v54_multi_pointer
	.4byte EraseFlashChip_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDDC size=0x4 source=v54_multi_pointer
	.4byte EraseFlashSector_MX
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EDE0 size=0x4 source=v54_multi_pointer
	.4byte WaitForFlashWrite_Common
	.4byte mxMaxTime @ maxTime
	.4byte 0x00020000 @ type.romSize = 131072
