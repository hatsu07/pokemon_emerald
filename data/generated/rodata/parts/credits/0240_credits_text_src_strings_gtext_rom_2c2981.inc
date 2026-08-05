	@ src/strings.c:1080 gText_WhatToDoWithNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2981
gText_Rom_2C2981: @ 0x082C2981
	.string "   ニュースを どうしますか?$"
	.if (. - gText_Rom_2C2981) != 0x11
	.error "gText_Rom_2C2981 must retain its original byte length"
	.endif
