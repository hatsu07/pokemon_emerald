	@ data/text/trainers.inc:3278 Route132_Text_DarcyDefeat (+1 aliases)
	.globl gText_Rom_261DD6
gText_Rom_261DD6: @ 0x08261DD6
	.string "わかったわよ\nみんなで つかえば いいんでしょ$"
	.if (. - gText_Rom_261DD6) > 0x18
	.error "gText_Rom_261DD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261DD6) < 0x18
	.space 0x18 - (. - gText_Rom_261DD6)
	.endif
