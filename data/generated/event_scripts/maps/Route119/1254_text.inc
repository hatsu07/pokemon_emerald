	@ data/maps/Route119/scripts.inc:571 Route119_Text_DontGoNearWeatherInstitute
	.globl gText_Rom_1ED6EB
gText_Rom_1ED6EB: @ 0x081ED6EB
	.string "みはりって いがいと ヒマだなあ……\pおい おまえ! おねがいだから\nてんき けんきゅうじょ には ちかづくなよ{EOS}"
	.if (. - gText_Rom_1ED6EB) > 0x39
	.error "gText_Rom_1ED6EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED6EB) < 0x39
	.space 0x39 - (. - gText_Rom_1ED6EB)
	.endif
