	@ src/strings.c:247 gText_WontHaveEffect
	.globl gText_Rom_5C9AF7
gText_Rom_5C9AF7: @ 0x085C9AF7
	.string "つかっても こうかがないよ{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9AF7) > 0x10
	.error "gText_Rom_5C9AF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AF7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9AF7)
	.endif
