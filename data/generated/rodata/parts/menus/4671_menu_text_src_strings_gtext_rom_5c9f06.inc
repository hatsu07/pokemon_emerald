	@ src/strings.c:288 gText_PPWasRestored
	.globl gText_Rom_5C9F06
gText_Rom_5C9F06: @ 0x085C9F06
	.string "わざポイントが\nかいふくした!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F06) > 0x12
	.error "gText_Rom_5C9F06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F06) < 0x12
	.space 0x12 - (. - gText_Rom_5C9F06)
	.endif
