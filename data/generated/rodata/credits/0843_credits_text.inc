	@ pret/pokeemerald-jp direct xref for 0x08566D42: record_mixing.s: SanitizeDayCareMailForRuby
	.globl gRecordMixingData_08566D42
gRecordMixingData_08566D42: @ 0x08566D42
	@ analyzed canonical ROM range 0x08566D42-0x08566D45
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0xBC, 0xC1, 0xC7, 0xFF
	.globl gText_Rom_566D46
gText_Rom_566D46: @ 0x08566D46
	@ Decoded text from ROM range: offset=0x566D46, size=0x4
	.string "SE　{EOS}"
	.globl gText_Rom_566D4A
gText_Rom_566D4A: @ 0x08566D4A
	@ Decoded text from ROM range: offset=0x566D4A, size=0xC
	.string "L…UP　R…DOWN{EOS}"
	.globl gText_Rom_566D56
gText_Rom_566D56: @ 0x08566D56
	@ Decoded text from ROM range: offset=0x566D56, size=0xE
	.string "R…DRIVERーTEST{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x08566D64: record_mixing.s: sub_080E89EC
	@ Large sound-driver-test window plus the dummy terminator.
	.globl sSoundDriverTestLargeWindowTemplates
sSoundDriverTestLargeWindowTemplates: @ 0x08566D64
	rodata_window_template 0, 1, 1, 28, 18, 15, 0x0014
	rodata_window_template 0xFF, 0, 0, 0, 0, 0, 0

	.if (. - sSoundDriverTestLargeWindowTemplates) != (2 * 8)
	.error "sound driver test large WindowTemplate table size mismatch"
	.endif

	.globl gRecordMixingData_08566D74
gRecordMixingData_08566D74: @ 0x08566D74
	@ analyzed canonical ROM range 0x08566D74-0x08566D79
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0xBC, 0x9A, 0x60, 0x7E, 0x44, 0x00
