	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:767 BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass
	.globl gText_Rom_234F78
gText_Rom_234F78: @ 0x08234F78
	.string "アザミ『…… …… …… ……\nフロンティアパス よこしな……"
	.byte EOS
	.if (. - gText_Rom_234F78) > 0x20
	.error "gText_Rom_234F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234F78) < 0x20
	.space 0x20 - (. - gText_Rom_234F78)
	.endif
