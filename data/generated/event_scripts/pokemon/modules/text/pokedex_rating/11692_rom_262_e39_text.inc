	@ data/text/pokedex_rating.inc:7 gBirchDexRatingText_SoYouveSeenAndCaught
	.globl gBirchDexRatingText_SoYouveSeenAndCaught
gBirchDexRatingText_SoYouveSeenAndCaught: @ 0x08262E39
	.string "ふむふむ……\pみつけた ポケモン {STR_VAR_1}\nつかまえた ポケモン {STR_VAR_2} か……{EOS}"
	.if (. - gBirchDexRatingText_SoYouveSeenAndCaught) > 0x26
	.error "gBirchDexRatingText_SoYouveSeenAndCaught may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_SoYouveSeenAndCaught) < 0x26
	.space 0x26 - (. - gBirchDexRatingText_SoYouveSeenAndCaught)
	.endif
