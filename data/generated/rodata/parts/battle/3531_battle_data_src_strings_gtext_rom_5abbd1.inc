	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABBD1
gText_Rom_5ABBD1: @ 0x085ABBD1
	.string "はい\nいいえ$"
	.if (. - gText_Rom_5ABBD1) != 0x7
	.error "gText_Rom_5ABBD1 must retain its original byte length"
	.endif
