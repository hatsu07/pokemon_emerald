	@ src/option_menu.c:87 gText_ButtonTypeNormal
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5373DA
gText_Rom_5373DA: @ 0x085373DA
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}ノーマル$"
	.if (. - gText_Rom_5373DA) != 0xb
	.error "gText_Rom_5373DA must retain its original byte length"
	.endif
