	@ src/option_menu.c:81 gText_BattleStyleShift
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_53739D
gText_Rom_53739D: @ 0x0853739D
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}いれかえ$"
	.if (. - gText_Rom_53739D) != 0xb
	.error "gText_Rom_53739D must retain its original byte length"
	.endif
