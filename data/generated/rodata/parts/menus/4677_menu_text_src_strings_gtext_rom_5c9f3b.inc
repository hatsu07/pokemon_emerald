	@ src/strings.c:291 gText_MovesPPIncreased
	.globl gText_Rom_5C9F3B
gText_Rom_5C9F3B: @ 0x085C9F3B
	.string "{STR_VAR_1}の\nわざポイントが ふえた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F3B) > 0x13
	.error "gText_Rom_5C9F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F3B) < 0x13
	.space 0x13 - (. - gText_Rom_5C9F3B)
	.endif
