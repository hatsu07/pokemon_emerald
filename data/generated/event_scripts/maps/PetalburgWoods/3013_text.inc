	@ data/maps/PetalburgWoods/scripts.inc:405 PetalburgWoods_Text_IWantRematch1 (+1 aliases)
	.globl gText_Rom_2148F9
gText_Rom_2148F9: @ 0x082148F9
	.string "むしポケモン そだったら また しょうぶだ!\nポケナビに とうろく するぞ{EOS}"
	.if (. - gText_Rom_2148F9) > 0x26
	.error "gText_Rom_2148F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2148F9) < 0x26
	.space 0x26 - (. - gText_Rom_2148F9)
	.endif
