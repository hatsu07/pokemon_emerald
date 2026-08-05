	@ data/maps/Route110/scripts.inc:848 Route110_Text_BikeTechniques
	.globl gText_Rom_1E9BAC
gText_Rom_1E9BAC: @ 0x081E9BAC
	.string "いろんな テクニックを おぼえると\nますます じてんしゃが たのしくなる!\pテクニックを つかわないと\nすすめない ばしょも あるしね!$"
	.if (. - gText_Rom_1E9BAC) > 0x45
	.error "gText_Rom_1E9BAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9BAC) < 0x45
	.space 0x45 - (. - gText_Rom_1E9BAC)
	.endif
