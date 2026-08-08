	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:321 BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard (+1 aliases)
	.globl gText_Rom_21EF66
gText_Rom_21EF66: @ 0x0821EF66
	.string "{PLAYER}は\nチケットを もっていない!\p……もうしわけ ありません!\pふねに のれるのは\nチケットの ある かた だけです"
	.byte EOS
	.if (. - gText_Rom_21EF66) > 0x3c
	.error "gText_Rom_21EF66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF66) < 0x3c
	.space 0x3c - (. - gText_Rom_21EF66)
	.endif
