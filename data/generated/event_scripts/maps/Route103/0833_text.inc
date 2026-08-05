	@ data/maps/Route103/scripts.inc:317 Route103_Text_BrendanRoute103Pokemon
	.globl gText_Rom_1E6FA8
gText_Rom_1E6FA8: @ 0x081E6FA8
	.string "ユウキ『そうか あいつと あいつが\n103ばん どうろに いる ポケモンか……$"
	.if (. - gText_Rom_1E6FA8) > 0x28
	.error "gText_Rom_1E6FA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6FA8) < 0x28
	.space 0x28 - (. - gText_Rom_1E6FA8)
	.endif
