	@ src/strings.c:972 gJPText_GameFreak
	.globl gText_Rom_5C8BF2
gText_Rom_5C8BF2: @ 0x085C8BF2
	.string "{COLOR RED}{SHADOW LIGHT_RED}ゲームフリーク$"
	.if (. - gText_Rom_5C8BF2) > 0xe
	.error "gText_Rom_5C8BF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BF2) < 0xe
	.space 0xe - (. - gText_Rom_5C8BF2)
	.endif
