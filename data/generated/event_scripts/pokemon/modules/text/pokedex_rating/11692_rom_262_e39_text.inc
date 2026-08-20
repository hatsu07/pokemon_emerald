	@ data/text/pokedex_rating.inc:7 gBirchDexRatingText_SoYouveSeenAndCaught
	.globl gText_Rom_262E39
gText_Rom_262E39: @ 0x08262E39
	.string "ふむふむ……\pみつけた ポケモン {STR_VAR_1}\nつかまえた ポケモン {STR_VAR_2} か……{EOS}"
	.if (. - gText_Rom_262E39) > 0x26
	.error "gText_Rom_262E39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262E39) < 0x26
	.space 0x26 - (. - gText_Rom_262E39)
	.endif
