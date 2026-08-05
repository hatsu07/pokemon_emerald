	@ data/text/trainers.inc:3191 Route131_Text_IanNotEnoughMons (+1 aliases)
	.globl gText_Rom_261A53
gText_Rom_261A53: @ 0x08261A53
	.string "カツ『ポケモン 2ひき いたら\nポケモンしょうぶ してやるよ!$"
	.if (. - gText_Rom_261A53) > 0x20
	.error "gText_Rom_261A53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261A53) < 0x20
	.space 0x20 - (. - gText_Rom_261A53)
	.endif
