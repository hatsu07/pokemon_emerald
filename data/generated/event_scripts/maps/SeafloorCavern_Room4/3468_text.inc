	@ data/maps/SeafloorCavern_Room4/scripts.inc:17 SeafloorCavern_Room4_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_218973
gText_Rom_218973: @ 0x08218973
	.string "まけた……!{EOS}"
	.if (. - gText_Rom_218973) > 0x7
	.error "gText_Rom_218973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218973) < 0x7
	.space 0x7 - (. - gText_Rom_218973)
	.endif
