	@ data/maps/Route119/scripts.inc:566 Route119_Text_StayAwayFromWeatherInstitute
	.globl gText_Rom_1ED6B1
gText_Rom_1ED6B1: @ 0x081ED6B1
	.string "オレたち ここで みはりを しているのさ\pおい おまえ! あぶないから\nてんき けんきゅうじょ には ちかづくなよ{EOS}"
	.if (. - gText_Rom_1ED6B1) > 0x3a
	.error "gText_Rom_1ED6B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED6B1) < 0x3a
	.space 0x3a - (. - gText_Rom_1ED6B1)
	.endif
