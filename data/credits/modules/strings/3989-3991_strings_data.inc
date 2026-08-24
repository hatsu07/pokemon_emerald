	@ src/strings.c:972 gJPText_GameFreak
	.globl gJPText_GameFreak
gJPText_GameFreak: @ 0x085C8BF2
	.string "{COLOR RED}{SHADOW LIGHT_RED}ゲームフリーク{EOS}"
	.if (. - gJPText_GameFreak) > 0xe
	.error "gJPText_GameFreak may not grow beyond its original slot"
	.endif
	.if (. - gJPText_GameFreak) < 0xe
	.space 0xe - (. - gJPText_GameFreak)
	.endif

	@ src/strings.c:973 gText_DiplomaEmpty
	.globl gText_DiplomaEmpty
gText_DiplomaEmpty: @ 0x085C8C00
	.string "{COLOR RED}{SHADOW LIGHT_RED}{EOS}"
	.if (. - gText_DiplomaEmpty) > 0x7
	.error "gText_DiplomaEmpty may not grow beyond its original slot"
	.endif
	.if (. - gText_DiplomaEmpty) < 0x7
	.space 0x7 - (. - gText_DiplomaEmpty)
	.endif
	.space 0x1, 0x00
