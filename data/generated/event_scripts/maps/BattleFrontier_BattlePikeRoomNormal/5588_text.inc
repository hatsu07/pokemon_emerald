	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:709 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
	.globl gText_Rom_234D99
gText_Rom_234D99: @ 0x08234D99
	.string "サマヨールの おにび!"
	.byte EOS
	.if (. - gText_Rom_234D99) > 0xc
	.error "gText_Rom_234D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D99) < 0xc
	.space 0xc - (. - gText_Rom_234D99)
	.endif
