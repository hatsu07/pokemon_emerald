	@ data/text/pokedex_rating.inc:4 gBirchDexRatingText_Cancel
	.globl gText_Rom_262E1D
gText_Rom_262E1D: @ 0x08262E1D
	.string "うん? みせるほど\nポケモンを つかまえて いないのか{EOS}"
	.if (. - gText_Rom_262E1D) > 0x1c
	.error "gText_Rom_262E1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262E1D) < 0x1c
	.space 0x1c - (. - gText_Rom_262E1D)
	.endif
