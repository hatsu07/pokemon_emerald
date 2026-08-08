	@ data/maps/PetalburgWoods/scripts.inc:347 PetalburgWoods_Text_YoureKiddingMe (+1 aliases)
	.globl gText_Rom_2146E2
gText_Rom_2146E2: @ 0x082146E2
	.string "……つ つよい じゃねーか!$"
	.if (. - gText_Rom_2146E2) > 0xf
	.error "gText_Rom_2146E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2146E2) < 0xf
	.space 0xf - (. - gText_Rom_2146E2)
	.endif
