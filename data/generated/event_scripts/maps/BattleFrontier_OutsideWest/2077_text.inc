	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:336 BattleFrontier_OutsideWest_Text_PleaseBoardFerry (+1 aliases)
	.globl gText_Rom_209CAA
gText_Rom_209CAA: @ 0x08209CAA
	.string "れんらくせんに のって おまちください{EOS}"
	.if (. - gText_Rom_209CAA) > 0x14
	.error "gText_Rom_209CAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209CAA) < 0x14
	.space 0x14 - (. - gText_Rom_209CAA)
	.endif
