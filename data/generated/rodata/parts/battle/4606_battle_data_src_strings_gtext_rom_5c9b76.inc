	@ src/strings.c:254 gText_CantSwitchWithAlly
	.globl gText_Rom_5C9B76
gText_Rom_5C9B76: @ 0x085C9B76
	.string "{STR_VAR_1}の ポケモンは じぶんの\nポケモンと いれかえることは できません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B76) > 0x27
	.error "gText_Rom_5C9B76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B76) < 0x27
	.space 0x27 - (. - gText_Rom_5C9B76)
	.endif
