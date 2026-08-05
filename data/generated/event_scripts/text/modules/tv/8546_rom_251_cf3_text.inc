	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251CF3
gText_Rom_251CF3: @ 0x08251CF3
	.string "テレビを　みています！\pかなりの　テレビっこ　みたいですねー$"
	.if (. - gText_Rom_251CF3) > 0x1f
	.error "gText_Rom_251CF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251CF3) < 0x1f
	.space 0x1f - (. - gText_Rom_251CF3)
	.endif
