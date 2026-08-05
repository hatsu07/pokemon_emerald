	@ data/maps/LilycoveCity/scripts.inc:573 LilycoveCity_Text_GetLostMessingUpTraining
	.globl gText_Rom_1E0DA6
gText_Rom_1E0DA6: @ 0x081E0DA6
	.string "……ん? なんだ おまえは?\pトレーニングの じゃまに なるから\nあっちに いっててくれ!$"
	.if (. - gText_Rom_1E0DA6) > 0x2e
	.error "gText_Rom_1E0DA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0DA6) < 0x2e
	.space 0x2e - (. - gText_Rom_1E0DA6)
	.endif
