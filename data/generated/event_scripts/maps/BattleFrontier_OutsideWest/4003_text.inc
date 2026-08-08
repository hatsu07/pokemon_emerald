	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:333 BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime (+1 aliases)
	.globl gText_Rom_21EFE9
gText_Rom_21EFE9: @ 0x0821EFE9
	.string "また ごりよう ください!"
	.byte EOS
	.if (. - gText_Rom_21EFE9) > 0xe
	.error "gText_Rom_21EFE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFE9) < 0xe
	.space 0xe - (. - gText_Rom_21EFE9)
	.endif
