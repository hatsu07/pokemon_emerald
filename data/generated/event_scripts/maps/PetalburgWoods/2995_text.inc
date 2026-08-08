	@ data/maps/PetalburgWoods/scripts.inc:368 PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro
	.globl gText_Rom_2147D2
gText_Rom_2147D2: @ 0x082147D2
	.string "……そういえば さっき アクアだんは\n「カナズミにも ねらっている ものがある」\lとか いってたよね……?$"
	.if (. - gText_Rom_2147D2) > 0x36
	.error "gText_Rom_2147D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2147D2) < 0x36
	.space 0x36 - (. - gText_Rom_2147D2)
	.endif
