	@ data/text/pokedex_rating.inc:1 gBirchDexRatingText_AreYouCurious
	.globl gText_Rom_262DF5
gText_Rom_262DF5: @ 0x08262DF5
	.string "オダマキ『おお {PLAYER}{KUN}!\pポケモンずかんの ようすを\nみせて くれるのかい?$"
	.if (. - gText_Rom_262DF5) > 0x28
	.error "gText_Rom_262DF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262DF5) < 0x28
	.space 0x28 - (. - gText_Rom_262DF5)
	.endif
