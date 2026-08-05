	@ src/strings.c:990 gText_MixingRecords
	.globl gText_Rom_566CA4
gText_Rom_566CA4: @ 0x08566CA4
	.string "レコードを まぜています$"
	.if (. - gText_Rom_566CA4) > 0xd
	.error "gText_Rom_566CA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566CA4) < 0xd
	.space 0xd - (. - gText_Rom_566CA4)
	.endif
	.globl gUnknown_8566CB1
gUnknown_8566CB1: @ 0x08566CB1

	@ src/strings.c:991 gText_RecordMixingComplete
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_566CB1
gText_Rom_566CB1: @ 0x08566CB1
	.string "しゅうりょう しました\nおつかれさまでした$"
	.if (. - gText_Rom_566CB1) != 0x16
	.error "gText_Rom_566CB1 must retain its original byte length"
	.endif
