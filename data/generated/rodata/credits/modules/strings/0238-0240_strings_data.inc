	@ src/strings.c:1079 gText_WhatToDoWithCards
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2973
gText_Rom_2C2973: @ 0x082C2973
	.string " カードを どうしますか?$"
	.if (. - gText_Rom_2C2973) != 0xe
	.error "gText_Rom_2C2973 must retain its original byte length"
	.endif
	.globl gUnknown_82C2974
	.set gUnknown_82C2974, gText_Rom_2C2973 + 0x1

	@ src/strings.c:1080 gText_WhatToDoWithNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2981
gText_Rom_2C2981: @ 0x082C2981
	.string "   ニュースを どうしますか?$"
	.if (. - gText_Rom_2C2981) != 0x11
	.error "gText_Rom_2C2981 must retain its original byte length"
	.endif
