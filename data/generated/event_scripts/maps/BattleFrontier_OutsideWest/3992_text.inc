	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:318 BattleFrontier_OutsideWest_Text_MayISeeYourTicket (+1 aliases)
	.globl gText_Rom_21EF43
gText_Rom_21EF43: @ 0x0821EF43
	.string "れんらくせんを ごりよう ですね!\nチケットは おもち でしょうか?"
	.byte EOS
	.if (. - gText_Rom_21EF43) > 0x23
	.error "gText_Rom_21EF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF43) < 0x23
	.space 0x23 - (. - gText_Rom_21EF43)
	.endif
