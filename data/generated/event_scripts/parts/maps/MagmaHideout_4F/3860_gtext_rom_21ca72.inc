	@ data/maps/MagmaHideout_4F/scripts.inc:138 MagmaHideout_4F_Text_Grunt11PostBattle
	.globl gText_Rom_21CA72
gText_Rom_21CA72: @ 0x0821CA72
	.string "そういえば グラードンには\nシッポなんて あるんだろうか……?"
	.byte EOS
	.if (. - gText_Rom_21CA72) > 0x20
	.error "gText_Rom_21CA72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA72) < 0x20
	.space 0x20 - (. - gText_Rom_21CA72)
	.endif
