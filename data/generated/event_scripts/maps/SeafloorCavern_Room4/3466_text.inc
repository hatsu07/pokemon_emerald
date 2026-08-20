	@ data/maps/SeafloorCavern_Room4/scripts.inc:14 SeafloorCavern_Room4_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_21895D
gText_Rom_21895D: @ 0x0821895D
	.string "だれだ おまえ?\nどこから はいってきた?{EOS}"
	.if (. - gText_Rom_21895D) > 0x16
	.error "gText_Rom_21895D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21895D) < 0x16
	.space 0x16 - (. - gText_Rom_21895D)
	.endif
