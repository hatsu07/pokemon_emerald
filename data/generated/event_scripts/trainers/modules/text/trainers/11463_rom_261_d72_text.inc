	@ data/text/trainers.inc:3269 Route132_Text_PaxtonDefeat (+1 aliases)
	.globl gText_Rom_261D72
gText_Rom_261D72: @ 0x08261D72
	.string "ああ やっぱり ダメかね$"
	.if (. - gText_Rom_261D72) > 0xd
	.error "gText_Rom_261D72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261D72) < 0xd
	.space 0xd - (. - gText_Rom_261D72)
	.endif
