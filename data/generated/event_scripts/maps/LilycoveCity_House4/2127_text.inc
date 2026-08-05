	@ data/maps/LilycoveCity_House4/scripts.inc:12 LilycoveCity_House4_Text_MysteriesAtBottomOfSea
	.globl gText_Rom_20A52D
gText_Rom_20A52D: @ 0x0820A52D
	.string "この ほしの さいだいの なぞ\nそれは かいていに あると おもうんだ！\p……というのは\nだれかが いってた ことなんだけど$"
	.if (. - gText_Rom_20A52D) > 0x3f
	.error "gText_Rom_20A52D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A52D) < 0x3f
	.space 0x3f - (. - gText_Rom_20A52D)
	.endif
