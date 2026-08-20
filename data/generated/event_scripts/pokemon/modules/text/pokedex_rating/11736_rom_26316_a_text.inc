	@ data/text/pokedex_rating.inc:73 gBirchDexRatingText_OnANationwideBasis
	.globl gText_Rom_26316A
gText_Rom_26316A: @ 0x0826316A
	.string "ふむふむ ぜんこくてき には……\pみつけた ポケモン {STR_VAR_1}\nつかまえた ポケモン {STR_VAR_2} だね{EOS}"
	.if (. - gText_Rom_26316A) > 0x2f
	.error "gText_Rom_26316A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26316A) < 0x2f
	.space 0x2f - (. - gText_Rom_26316A)
	.endif
