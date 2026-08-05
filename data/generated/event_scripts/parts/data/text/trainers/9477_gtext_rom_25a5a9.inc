	@ data/text/trainers.inc:371 Route105_Text_JosueDefeated (+1 aliases)
	.globl gText_Rom_25A5A9
gText_Rom_25A5A9: @ 0x0825A5A9
	.string "うみで たたかった から まけたんだ$"
	.if (. - gText_Rom_25A5A9) > 0x13
	.error "gText_Rom_25A5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5A9) < 0x13
	.space 0x13 - (. - gText_Rom_25A5A9)
	.endif
