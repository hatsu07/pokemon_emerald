	@ src/option_menu.c:78 gText_TextSpeedFast
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537380
gText_Rom_537380: @ 0x08537380
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}はやい$"
	.if (. - gText_Rom_537380) != 0xa
	.error "gText_Rom_537380 must retain its original byte length"
	.endif
