	@ data/text/pokedex_rating.inc:1 gBirchDexRatingText_AreYouCurious
	.globl gBirchDexRatingText_AreYouCurious
gBirchDexRatingText_AreYouCurious: @ 0x08262DF5
	.string "オダマキ『おお {PLAYER}{KUN}!\pポケモンずかんの ようすを\nみせて くれるのかい?{EOS}"
	.if (. - gBirchDexRatingText_AreYouCurious) > 0x28
	.error "gBirchDexRatingText_AreYouCurious may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_AreYouCurious) < 0x28
	.space 0x28 - (. - gBirchDexRatingText_AreYouCurious)
	.endif
