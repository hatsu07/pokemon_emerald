	@ src/strings.c:278 gText_WhichMoveToForget
	.globl gText_Rom_5C9E23
gText_Rom_5C9E23: @ 0x085C9E23
	.string "どの わざを\nわすれさせたい?{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E23) > 0x12
	.error "gText_Rom_5C9E23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E23) < 0x12
	.space 0x12 - (. - gText_Rom_5C9E23)
	.endif
