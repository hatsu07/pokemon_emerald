	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:336 BattleFrontier_OutsideWest_Text_PleaseBoardFerry (+1 aliases)
	.globl gText_Rom_21EFF7
gText_Rom_21EFF7: @ 0x0821EFF7
	.string "れんらくせんに のって おまちください"
	.byte EOS
	.if (. - gText_Rom_21EFF7) > 0x14
	.error "gText_Rom_21EFF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFF7) < 0x14
	.space 0x14 - (. - gText_Rom_21EFF7)
	.endif
