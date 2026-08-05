	@ src/strings.c:168 gText_PlayerUsedVar2
	.globl gText_Rom_5C9644
gText_Rom_5C9644: @ 0x085C9644
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9644) > 0x10
	.error "gText_Rom_5C9644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9644) < 0x10
	.space 0x10 - (. - gText_Rom_5C9644)
	.endif
