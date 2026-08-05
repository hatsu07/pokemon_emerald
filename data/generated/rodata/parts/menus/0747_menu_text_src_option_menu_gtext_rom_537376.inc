	@ src/option_menu.c:77 gText_TextSpeedMid
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537376
gText_Rom_537376: @ 0x08537376
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ふつう$"
	.if (. - gText_Rom_537376) != 0xa
	.error "gText_Rom_537376 must retain its original byte length"
	.endif
