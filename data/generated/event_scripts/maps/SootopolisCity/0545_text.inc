	@ data/maps/SootopolisCity/scripts.inc:1456 SootopolisCity_Text_AwakenedPokemonClash
	.globl gText_Rom_1E311F
gText_Rom_1E311F: @ 0x081E311F
	.string "おお……\pめざめた 2ひきの あらそいを\nもう 1ひきの めざめが しずめた……$"
	.if (. - gText_Rom_1E311F) > 0x29
	.error "gText_Rom_1E311F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E311F) < 0x29
	.space 0x29 - (. - gText_Rom_1E311F)
	.endif
