	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:333 BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime (+1 aliases)
	.globl gText_Rom_209C81
gText_Rom_209C81: @ 0x08209C81
	.string "また ごりよう ください!$"
	.if (. - gText_Rom_209C81) > 0xe
	.error "gText_Rom_209C81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C81) < 0xe
	.space 0xe - (. - gText_Rom_209C81)
	.endif
