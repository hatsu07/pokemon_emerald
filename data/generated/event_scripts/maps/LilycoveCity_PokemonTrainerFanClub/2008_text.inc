	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:593 LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly
	.globl gText_Rom_208DAD
gText_Rom_208DAD: @ 0x08208DAD
	.string "わたしの いちばん すきな\nトレーナーは なんと いっても\pムロの ジムリーダー\nトウキさまよ！{EOS}"
	.if (. - gText_Rom_208DAD) > 0x31
	.error "gText_Rom_208DAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208DAD) < 0x31
	.space 0x31 - (. - gText_Rom_208DAD)
	.endif
