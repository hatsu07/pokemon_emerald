	@ src/option_menu.c:76 gText_TextSpeedSlow
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_53736C
gText_Rom_53736C: @ 0x0853736C
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}おそい$"
	.if (. - gText_Rom_53736C) != 0xa
	.error "gText_Rom_53736C must retain its original byte length"
	.endif
