	@ src/strings.c:274 gText_PkmnCantLearnMove
	.globl gText_Rom_5C9D7C
gText_Rom_5C9D7C: @ 0x085C9D7C
	.string "{STR_VAR_1}と {STR_VAR_2}は\nあいしょうが わるかった!\p{STR_VAR_2}は おぼえられない!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D7C) > 0x25
	.error "gText_Rom_5C9D7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D7C) < 0x25
	.space 0x25 - (. - gText_Rom_5C9D7C)
	.endif
