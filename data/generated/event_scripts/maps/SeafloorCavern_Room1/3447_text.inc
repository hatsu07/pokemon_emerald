	@ data/maps/SeafloorCavern_Room1/scripts.inc:23 SeafloorCavern_Room1_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_2186D5
gText_Rom_2186D5: @ 0x082186D5
	.string "せんすいてい ちっちゃいからよー\nからだの あちこちが いたい じゃねーか!{EOS}"
	.if (. - gText_Rom_2186D5) > 0x27
	.error "gText_Rom_2186D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186D5) < 0x27
	.space 0x27 - (. - gText_Rom_2186D5)
	.endif
