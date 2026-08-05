	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:830 BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster
	.globl gText_Rom_2351FE
gText_Rom_2351FE: @ 0x082351FE
	.string "では わたくしどもの あるじを\nよんで まいり ますね……"
	.byte EOS
	.if (. - gText_Rom_2351FE) > 0x1e
	.error "gText_Rom_2351FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2351FE) < 0x1e
	.space 0x1e - (. - gText_Rom_2351FE)
	.endif
