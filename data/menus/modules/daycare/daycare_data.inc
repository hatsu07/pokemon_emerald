	.globl gDaycareData_08300A95
gDaycareData_08300A95: @ 0x08300A95
	@ analyzed canonical ROM range 0x08300A95-0x08300A96
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0xB5, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x08300A97: daycare.s: AppendGenderSymbol
	.globl gDaycareData_08300A97
gDaycareData_08300A97: @ 0x08300A97
	@ analyzed canonical ROM range 0x08300A97-0x08300A98
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0xB6, 0xFF
