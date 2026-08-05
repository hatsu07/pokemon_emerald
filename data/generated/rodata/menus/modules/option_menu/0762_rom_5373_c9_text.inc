	@ src/option_menu.c:85 gText_FrameType
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5373C9
gText_Rom_5373C9: @ 0x085373C9
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}タイプ$"
	.if (. - gText_Rom_5373C9) != 0xa
	.error "gText_Rom_5373C9 must retain its original byte length"
	.endif
