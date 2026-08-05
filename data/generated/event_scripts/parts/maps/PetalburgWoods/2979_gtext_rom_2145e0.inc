	@ data/maps/PetalburgWoods/scripts.inc:321 PetalburgWoods_Text_HaveYouSeenShroomish
	.globl gText_Rom_2145E0
gText_Rom_2145E0: @ 0x082145E0
	.string "ねえ きみきみ このあたりで\nキノココって ポケモン みなかった?\pおじさん あの ポケモン すき なのよね$"
	.if (. - gText_Rom_2145E0) > 0x37
	.error "gText_Rom_2145E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2145E0) < 0x37
	.space 0x37 - (. - gText_Rom_2145E0)
	.endif
