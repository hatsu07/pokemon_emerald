	@ data/maps/SeafloorCavern_Room1/scripts.inc:26 SeafloorCavern_Room1_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_2186FC
gText_Rom_2186FC: @ 0x082186FC
	.string "まけたら\nいたい じゃねーか!{EOS}"
	.if (. - gText_Rom_2186FC) > 0x10
	.error "gText_Rom_2186FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186FC) < 0x10
	.space 0x10 - (. - gText_Rom_2186FC)
	.endif
