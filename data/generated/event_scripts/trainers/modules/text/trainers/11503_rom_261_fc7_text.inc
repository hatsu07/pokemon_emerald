	@ data/text/trainers.inc:3329 Route133_Text_MollieIntro (+1 aliases)
	.globl gText_Rom_261FC7
gText_Rom_261FC7: @ 0x08261FC7
	.string "いままでに なんぜんかい\nポケモン しょうぶを したかねえ$"
	.if (. - gText_Rom_261FC7) > 0x1e
	.error "gText_Rom_261FC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261FC7) < 0x1e
	.space 0x1e - (. - gText_Rom_261FC7)
	.endif
