	@ data/text/pokedex_rating.inc:73 gBirchDexRatingText_OnANationwideBasis
	.globl gBirchDexRatingText_OnANationwideBasis
gBirchDexRatingText_OnANationwideBasis: @ 0x0826316A
	.string "ふむふむ ぜんこくてき には……\pみつけた ポケモン {STR_VAR_1}\nつかまえた ポケモン {STR_VAR_2} だね{EOS}"
	.if (. - gBirchDexRatingText_OnANationwideBasis) > 0x2f
	.error "gBirchDexRatingText_OnANationwideBasis may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_OnANationwideBasis) < 0x2f
	.space 0x2f - (. - gBirchDexRatingText_OnANationwideBasis)
	.endif
