	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:321 BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard (+1 aliases)
	.globl gText_Rom_209C16
gText_Rom_209C16: @ 0x08209C16
	.string "{PLAYER}は\nチケットを もっていない!\p……もうしわけ ありません!\pふねに のれるのは\nチケットの ある かた だけです$"
	.if (. - gText_Rom_209C16) > 0x3c
	.error "gText_Rom_209C16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C16) < 0x3c
	.space 0x3c - (. - gText_Rom_209C16)
	.endif
