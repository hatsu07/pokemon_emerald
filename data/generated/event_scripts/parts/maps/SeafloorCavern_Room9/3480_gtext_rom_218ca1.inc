	@ data/maps/SeafloorCavern_Room9/scripts.inc:221 SeafloorCavern_Room9_Text_ArchieSoItWasYou
	.globl gText_Rom_218CA1
gText_Rom_218CA1: @ 0x08218CA1
	.string "アオギリ『ふふふ……\nやはり おまえ だったか$"
	.if (. - gText_Rom_218CA1) > 0x18
	.error "gText_Rom_218CA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218CA1) < 0x18
	.space 0x18 - (. - gText_Rom_218CA1)
	.endif
