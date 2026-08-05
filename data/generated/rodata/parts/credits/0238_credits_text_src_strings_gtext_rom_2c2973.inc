	@ src/strings.c:1079 gText_WhatToDoWithCards
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2973
gText_Rom_2C2973: @ 0x082C2973
	.string " カードを どうしますか?$"
	.if (. - gText_Rom_2C2973) != 0xe
	.error "gText_Rom_2C2973 must retain its original byte length"
	.endif
