	.globl gUnknown_8566D7E
gUnknown_8566D7E: @ 0x08566D7E
	@ Decoded text from ROM range: offset=0x566D7E, size=0xB
	.string "Aボタンで　さいせい$"
	@ pret/pokeemerald-jp direct xref for 0x08566D89: record_mixing.s: sub_080E8AA0
	.globl gRecordMixingData_08566D89
gRecordMixingData_08566D89: @ 0x08566D89
	@ analyzed canonical ROM range 0x08566D89-0x08566D8E
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0xD0, 0xC9, 0xC3, 0xBD, 0xBF, 0xB0
