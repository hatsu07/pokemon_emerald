	@ src/strings.c:972 gJPText_GameFreak
	.globl gText_Rom_5C8BF2
gText_Rom_5C8BF2: @ 0x085C8BF2
	.string "{COLOR RED}{SHADOW LIGHT_RED}ゲームフリーク{EOS}"
	.if (. - gText_Rom_5C8BF2) > 0xe
	.error "gText_Rom_5C8BF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BF2) < 0xe
	.space 0xe - (. - gText_Rom_5C8BF2)
	.endif

	@ src/strings.c:973 gText_DiplomaEmpty
	.globl gText_Rom_5C8C00
gText_Rom_5C8C00: @ 0x085C8C00
	.string "{COLOR RED}{SHADOW LIGHT_RED}{EOS}"
	.if (. - gText_Rom_5C8C00) > 0x7
	.error "gText_Rom_5C8C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C00) < 0x7
	.space 0x7 - (. - gText_Rom_5C8C00)
	.endif
	.space 0x1, 0x00
