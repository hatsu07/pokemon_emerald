	@ data/maps/MossdeepCity_House4/scripts.inc:51 MossdeepCity_House4_Text_MakeSecretBase
	.globl gText_Rom_20CD2C
gText_Rom_20CD2C: @ 0x0820CD2C
	.string "きみ どこかに ひみつきち つくりなよ!\nぼくが さがしだして みせるからさ$"
	.if (. - gText_Rom_20CD2C) > 0x27
	.error "gText_Rom_20CD2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CD2C) < 0x27
	.space 0x27 - (. - gText_Rom_20CD2C)
	.endif
