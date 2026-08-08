	@ data/maps/CaveOfOrigin_B1F/scripts.inc:74 CaveOfOrigin_B1F_Text_CantYouRememberSomehow
	.globl gText_Rom_21941A
gText_Rom_21941A: @ 0x0821941A
	.string "ミクリ『えっ おぼえてない って!?\nうーん それは こまったな……\pなんとか\nおもいだして もらえない だろうか……$"
	.if (. - gText_Rom_21941A) > 0x3c
	.error "gText_Rom_21941A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21941A) < 0x3c
	.space 0x3c - (. - gText_Rom_21941A)
	.endif
