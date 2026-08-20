	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:318 BattleFrontier_OutsideWest_Text_MayISeeYourTicket (+1 aliases)
	.globl gText_Rom_209BF3
gText_Rom_209BF3: @ 0x08209BF3
	.string "れんらくせんを ごりよう ですね!\nチケットは おもち でしょうか?{EOS}"
	.if (. - gText_Rom_209BF3) > 0x23
	.error "gText_Rom_209BF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209BF3) < 0x23
	.space 0x23 - (. - gText_Rom_209BF3)
	.endif
