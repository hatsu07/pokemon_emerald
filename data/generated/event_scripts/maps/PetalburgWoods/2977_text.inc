	@ data/maps/PetalburgWoods/scripts.inc:318 PetalburgWoods_Text_NotAOneToBeFound
	.globl gText_Rom_2145D4
gText_Rom_2145D4: @ 0x082145D4
	.string "うーん\nいないなあ……$"
	.if (. - gText_Rom_2145D4) > 0xc
	.error "gText_Rom_2145D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2145D4) < 0xc
	.space 0xc - (. - gText_Rom_2145D4)
	.endif
