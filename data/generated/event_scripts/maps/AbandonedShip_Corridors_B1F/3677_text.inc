	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:59 AbandonedShip_Corridors_B1F_Text_DuncanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21ACC7
gText_Rom_21ACC7: @ 0x0821ACC7
	.string "こりゃ まいった"
	.byte EOS
	.if (. - gText_Rom_21ACC7) != 0x9
	.error "gText_Rom_21ACC7 must retain its original byte length"
	.endif
