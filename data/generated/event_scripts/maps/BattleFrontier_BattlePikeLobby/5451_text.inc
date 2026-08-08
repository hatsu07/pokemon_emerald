	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:303 BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou
	.globl gText_Rom_2336C9
gText_Rom_2336C9: @ 0x082336C9
	.string "では またの きかいを\nおまちして おります……"
	.byte EOS
	.if (. - gText_Rom_2336C9) > 0x19
	.error "gText_Rom_2336C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2336C9) < 0x19
	.space 0x19 - (. - gText_Rom_2336C9)
	.endif
