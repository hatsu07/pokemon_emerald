	@ src/strings.c:991 gText_RecordMixingComplete
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_566CB1
gText_Rom_566CB1: @ 0x08566CB1
	.string "しゅうりょう しました\nおつかれさまでした$"
	.if (. - gText_Rom_566CB1) != 0x16
	.error "gText_Rom_566CB1 must retain its original byte length"
	.endif
