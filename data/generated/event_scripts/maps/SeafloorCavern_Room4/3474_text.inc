	@ data/maps/SeafloorCavern_Room4/scripts.inc:26 SeafloorCavern_Room4_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_2189BA
gText_Rom_2189BA: @ 0x082189BA
	.string "かてなかった……!{EOS}"
	.if (. - gText_Rom_2189BA) > 0xa
	.error "gText_Rom_2189BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2189BA) < 0xa
	.space 0xa - (. - gText_Rom_2189BA)
	.endif
