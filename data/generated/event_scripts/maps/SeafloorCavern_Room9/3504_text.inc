	@ data/maps/SeafloorCavern_Room9/scripts.inc:257 SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue
	.globl gText_Rom_219035
gText_Rom_219035: @ 0x08219035
	.string "マツブサ『とにかく いまは ここで\nいいあらそいを している ひまはない!\pそとに でて たしかめると いい!\nめのまえに ひろがっているのが\lわれわれの のぞんだ せかいか どうか!$"
	.if (. - gText_Rom_219035) > 0x5d
	.error "gText_Rom_219035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219035) < 0x5d
	.space 0x5d - (. - gText_Rom_219035)
	.endif
