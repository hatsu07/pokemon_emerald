	@ data/text/pokedex_rating.inc:4 gBirchDexRatingText_Cancel
	.globl gBirchDexRatingText_Cancel
gBirchDexRatingText_Cancel: @ 0x08262E1D
	.string "うん? みせるほど\nポケモンを つかまえて いないのか{EOS}"
	.if (. - gBirchDexRatingText_Cancel) > 0x1c
	.error "gBirchDexRatingText_Cancel may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_Cancel) < 0x1c
	.space 0x1c - (. - gBirchDexRatingText_Cancel)
	.endif
