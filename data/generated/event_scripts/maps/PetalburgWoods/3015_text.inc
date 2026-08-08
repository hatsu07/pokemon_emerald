	@ data/maps/PetalburgWoods/scripts.inc:405 PetalburgWoods_Text_IWantRematch1 (+1 aliases)
	.globl gText_Rom_21491F
gText_Rom_21491F: @ 0x0821491F
	.string "むしポケモン そだったら また しょうぶだ!\nポケナビに とうろく するぞ$"
	.if (. - gText_Rom_21491F) > 0x26
	.error "gText_Rom_21491F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21491F) < 0x26
	.space 0x26 - (. - gText_Rom_21491F)
	.endif
