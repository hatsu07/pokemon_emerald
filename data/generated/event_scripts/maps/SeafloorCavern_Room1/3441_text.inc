	@ data/maps/SeafloorCavern_Room1/scripts.inc:14 SeafloorCavern_Room1_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_21868D
gText_Rom_21868D: @ 0x0821868D
	.string "こどもに ようは ねーんだ\nほら さっさと かえれよ!$"
	.if (. - gText_Rom_21868D) > 0x1c
	.error "gText_Rom_21868D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21868D) < 0x1c
	.space 0x1c - (. - gText_Rom_21868D)
	.endif
