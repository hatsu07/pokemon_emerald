	@ src/strings.c:295 gText_PkmnBaseVar2StatIncreased
	.globl gText_Rom_5C9F5F
gText_Rom_5C9F5F: @ 0x085C9F5F
	.string "{STR_VAR_1}の {STR_VAR_2}の\nきそ ポイントが あがった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F5F) > 0x19
	.error "gText_Rom_5C9F5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F5F) < 0x19
	.space 0x19 - (. - gText_Rom_5C9F5F)
	.endif
