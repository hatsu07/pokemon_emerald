	@ src/strings.c:263 gText_PkmnWasGivenItem
	.globl gText_Rom_5C9C76
gText_Rom_5C9C76: @ 0x085C9C76
	.string "{STR_VAR_1}に\n{STR_VAR_2}を もたせた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C76) > 0x10
	.error "gText_Rom_5C9C76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C76) < 0x10
	.space 0x10 - (. - gText_Rom_5C9C76)
	.endif
