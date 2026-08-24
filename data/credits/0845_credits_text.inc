	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_566D7A
gText_Rom_566D7A: @ 0x08566D7A
	.string "もどる{EOS}"
	.if (. - gText_Rom_566D7A) > 0x4
	.error "gText_Rom_566D7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D7A) < 0x4
	.space 0x4 - (. - gText_Rom_566D7A)
	.endif
	.globl gText_Rom_566D7E
gText_Rom_566D7E: @ 0x08566D7E
	@ Decoded text from ROM range: offset=0x566D7E, size=0xB
	.string "Aボタンで　さいせい{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x08566D89: record_mixing.s: sub_080E8AA0
	.globl gRecordMixingData_08566D89
gRecordMixingData_08566D89: @ 0x08566D89
	@ analyzed canonical ROM range 0x08566D89-0x08566D8E
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0xD0, 0xC9, 0xC3, 0xBD, 0xBF, 0xB0
