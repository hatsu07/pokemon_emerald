	@ data/maps/MossdeepCity/scripts.inc:345 MossdeepCity_Text_ItsAWhiteRock
	.globl gText_Rom_1E1B7D
gText_Rom_1E1B7D: @ 0x081E1B7D
	.string "しろい いわ だ!$"
	.if (. - gText_Rom_1E1B7D) > 0xa
	.error "gText_Rom_1E1B7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1B7D) < 0xa
	.space 0xa - (. - gText_Rom_1E1B7D)
	.endif
