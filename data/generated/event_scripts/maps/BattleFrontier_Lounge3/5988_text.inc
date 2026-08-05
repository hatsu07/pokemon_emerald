	@ data/maps/BattleFrontier_Lounge3/scripts.inc:308 BattleFrontier_Lounge3_Text_Oh
	.globl gText_Rom_2384DA
gText_Rom_2384DA: @ 0x082384DA
	.string "おっ……"
	.byte EOS
	.if (. - gText_Rom_2384DA) > 0x5
	.error "gText_Rom_2384DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2384DA) < 0x5
	.space 0x5 - (. - gText_Rom_2384DA)
	.endif
