	@ src/strings.c:649 gText_InGameClockUsable
	.globl gText_Rom_5CBF86
gText_Rom_5CBF86: @ 0x085CBF86
	.string "ゲームない じかんの しゅうせい システムが\nつかえる ように なりました!$"
	.if (. - gText_Rom_5CBF86) > 0x27
	.error "gText_Rom_5CBF86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF86) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF86)
	.endif
