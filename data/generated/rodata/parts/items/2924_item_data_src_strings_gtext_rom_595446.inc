	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_595446
gText_Rom_595446: @ 0x08595446
	.string "はい\nいいえ$"
	.if (. - gText_Rom_595446) != 0x7
	.error "gText_Rom_595446 must retain its original byte length"
	.endif
