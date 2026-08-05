	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:723 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops
	.globl gText_Rom_234DEA
gText_Rom_234DEA: @ 0x08234DEA
	.string "もうしわけない ……\pわたしの サマヨールは おくびょう でな……"
	.byte EOS
	.if (. - gText_Rom_234DEA) > 0x22
	.error "gText_Rom_234DEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234DEA) < 0x22
	.space 0x22 - (. - gText_Rom_234DEA)
	.endif
