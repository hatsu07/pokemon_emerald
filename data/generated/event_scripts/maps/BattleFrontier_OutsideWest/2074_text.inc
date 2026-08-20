	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl gText_Rom_209C8F
gText_Rom_209C8F: @ 0x08209C8F
	.string "カイナシティ ですね!{EOS}"
	.if (. - gText_Rom_209C8F) > 0xc
	.error "gText_Rom_209C8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C8F) < 0xc
	.space 0xc - (. - gText_Rom_209C8F)
	.endif
