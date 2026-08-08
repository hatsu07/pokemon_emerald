	@ data/text/trainers.inc:350 Route105_Text_AndresDefeated (+1 aliases)
	.globl gText_Rom_25A4BD
gText_Rom_25A4BD: @ 0x0825A4BD
	.string "うん…… わし\nしょうぶは よわいんだよ$"
	.if (. - gText_Rom_25A4BD) > 0x15
	.error "gText_Rom_25A4BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4BD) < 0x15
	.space 0x15 - (. - gText_Rom_25A4BD)
	.endif
