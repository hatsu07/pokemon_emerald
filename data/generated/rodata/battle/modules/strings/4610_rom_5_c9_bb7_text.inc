	@ src/strings.c:256 gText_CantUseUntilNewBadge
	.globl gText_Rom_5C9BB7
gText_Rom_5C9BB7: @ 0x085C9BB7
	.string "あたらしい バッジを てにするまで\nまだ つかえません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9BB7) > 0x1e
	.error "gText_Rom_5C9BB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9BB7) < 0x1e
	.space 0x1e - (. - gText_Rom_5C9BB7)
	.endif
