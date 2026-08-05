	@ src/strings.c:251 gText_PkmnAlreadyInBattle
	.globl gText_Rom_5C9B2D
gText_Rom_5C9B2D: @ 0x085C9B2D
	.string "{STR_VAR_1}は すでに\nせんとうに でています{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B2D) > 0x16
	.error "gText_Rom_5C9B2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B2D) < 0x16
	.space 0x16 - (. - gText_Rom_5C9B2D)
	.endif
