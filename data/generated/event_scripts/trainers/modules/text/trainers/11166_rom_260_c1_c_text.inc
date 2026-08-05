	@ data/text/trainers.inc:2831 Route126_Text_NikkiPostBattle
	.globl gText_Rom_260C1C
gText_Rom_260C1C: @ 0x08260C1C
	.string "こっぴどく やられちゃったわ……\nアワくって にげだしたい きぶん……$"
	.if (. - gText_Rom_260C1C) > 0x24
	.error "gText_Rom_260C1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260C1C) < 0x24
	.space 0x24 - (. - gText_Rom_260C1C)
	.endif
