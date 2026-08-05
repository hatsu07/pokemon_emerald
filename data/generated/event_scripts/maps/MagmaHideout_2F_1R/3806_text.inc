	@ data/maps/MagmaHideout_2F_1R/scripts.inc:61 MagmaHideout_2F_1R_Text_Grunt4PostBattle
	.globl gText_Rom_21C3E3
gText_Rom_21C3E3: @ 0x0821C3E3
	.string "しょうぶに まけたのに\nまだ ここを ぐるぐる まわる\lひつようが あるんだろうか?"
	.byte EOS
	.if (. - gText_Rom_21C3E3) > 0x2b
	.error "gText_Rom_21C3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3E3) < 0x2b
	.space 0x2b - (. - gText_Rom_21C3E3)
	.endif
