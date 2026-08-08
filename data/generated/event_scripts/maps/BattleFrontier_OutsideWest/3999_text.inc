	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl gText_Rom_21EFD1
gText_Rom_21EFD1: @ 0x0821EFD1
	.string "カイナシティ ですね!"
	.byte EOS
	.if (. - gText_Rom_21EFD1) > 0xc
	.error "gText_Rom_21EFD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFD1) < 0xc
	.space 0xc - (. - gText_Rom_21EFD1)
	.endif
