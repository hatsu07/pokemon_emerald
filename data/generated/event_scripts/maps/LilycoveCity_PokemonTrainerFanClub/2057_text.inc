	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:665 LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth
	.globl gText_Rom_209400
gText_Rom_209400: @ 0x08209400
	.string "おぬしの しんの ちからは\nこの わしだけが しっていれば よいのじゃ\pみなには その ひめられた ちから\nわかるまい……{EOS}"
	.if (. - gText_Rom_209400) > 0x3e
	.error "gText_Rom_209400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209400) < 0x3e
	.space 0x3e - (. - gText_Rom_209400)
	.endif
