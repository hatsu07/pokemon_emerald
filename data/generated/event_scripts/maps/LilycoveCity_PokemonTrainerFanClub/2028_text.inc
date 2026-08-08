	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:623 LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat
	.globl gText_Rom_209072
gText_Rom_209072: @ 0x08209072
	.string "わたしのね\nすきな トレーナーは\pかっこよくて\pつよくて\pそれでいて やさしい\pそんな トレーナーが いいなぁ……$"
	.if (. - gText_Rom_209072) > 0x3a
	.error "gText_Rom_209072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209072) < 0x3a
	.space 0x3a - (. - gText_Rom_209072)
	.endif
