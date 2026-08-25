	.2byte 0x0000 @ type.sector.top
	.2byte 0x0000 @ alignment
	.2byte 0x0003, 0x0001 @ type.wait[2]
	.byte 0x62, 0x13 @ type.ids.makerId/deviceId
	.2byte 0x0000 @ alignment
	@ SII RTC library version string immediately follows FlashSetupInfo.
	.globl gAgbLibSiirtcVersion
gAgbLibSiirtcVersion:
	.byte 0x53, 0x49, 0x49, 0x52, 0x54, 0x43, 0x5F, 0x56, 0x30, 0x30, 0x31, 0x00 @ SIIRTC_V001 + NUL
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE78 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE7C size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE80 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE84 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE88 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE8C size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE90 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE94 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE98 size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0890EE9C size=0x4 source=v54_multi_pointer
	.4byte gIwram_JP_03001A76
	@ ANALYSIS: ROM_POINTER_FIELD size=0x4 addr=0x0890EEA0 parent=gAgbFlashData_0890ED54 offset=0x14C value=0x080000C6
	@ ANALYSIS: SOURCE_RANGE addr=0x0890EEA0 size=0x4
	.byte 0xC6, 0x00, 0x00, 0x08
