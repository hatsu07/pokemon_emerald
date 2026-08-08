	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:712 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
	.globl gText_Rom_234DA5
gText_Rom_234DA5: @ 0x08234DA5
	.string "サマヨールの れいとうビーム!"
	.byte EOS
	.if (. - gText_Rom_234DA5) > 0x10
	.error "gText_Rom_234DA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234DA5) < 0x10
	.space 0x10 - (. - gText_Rom_234DA5)
	.endif
