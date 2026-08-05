	@ data/maps/PetalburgWoods/scripts.inc:394 PetalburgWoods_Text_InstantlyPopularWithBugPokemon (+1 aliases)
	.globl gText_Rom_21489D
gText_Rom_21489D: @ 0x0821489D
	.string "むしポケモンを がっこうに もっていくと\nそれだけで にんきもの だろ!?$"
	.if (. - gText_Rom_21489D) > 0x26
	.error "gText_Rom_21489D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21489D) < 0x26
	.space 0x26 - (. - gText_Rom_21489D)
	.endif
