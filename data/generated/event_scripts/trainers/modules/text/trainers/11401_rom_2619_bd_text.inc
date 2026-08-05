	@ data/text/trainers.inc:3179 Route131_Text_ReliNotEnoughMons (+1 aliases)
	.globl gText_Rom_2619BD
gText_Rom_2619BD: @ 0x082619BD
	.string "アミ『ポケモン 2ひき いないの?\nポケモンしょうぶ たのしめないわね$"
	.if (. - gText_Rom_2619BD) > 0x24
	.error "gText_Rom_2619BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2619BD) < 0x24
	.space 0x24 - (. - gText_Rom_2619BD)
	.endif
