	@ data/maps/SeafloorCavern_Room4/scripts.inc:23 SeafloorCavern_Room4_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_2189A4
gText_Rom_2189A4: @ 0x082189A4
	.string "あなた だれ?\nどこへ いこうってのよ!?$"
	.if (. - gText_Rom_2189A4) > 0x16
	.error "gText_Rom_2189A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2189A4) < 0x16
	.space 0x16 - (. - gText_Rom_2189A4)
	.endif
