	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:578 LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer
	.globl gText_Rom_208CA7
gText_Rom_208CA7: @ 0x08208CA7
	.string "さいきん つぎつぎと ジムリーダーを\nたおしている っていう\pつよい トレーナーが\nあらわれた らしいんだ\pきみ しらないかい?$"
	.if (. - gText_Rom_208CA7) > 0x41
	.error "gText_Rom_208CA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208CA7) < 0x41
	.space 0x41 - (. - gText_Rom_208CA7)
	.endif
