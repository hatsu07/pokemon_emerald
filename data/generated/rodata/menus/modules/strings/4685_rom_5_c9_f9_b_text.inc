	@ src/strings.c:297 gText_PkmnAdoresBaseVar2Fell
	.globl gText_Rom_5C9F9B
gText_Rom_5C9F9B: @ 0x085C9F9B
	.string "{STR_VAR_1}は さいこうに なついている!\n{STR_VAR_2}の きそポイントが さがった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F9B) > 0x26
	.error "gText_Rom_5C9F9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F9B) < 0x26
	.space 0x26 - (. - gText_Rom_5C9F9B)
	.endif
