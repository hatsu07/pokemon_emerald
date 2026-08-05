	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:702 BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems
	.globl gText_Rom_22D276
gText_Rom_22D276: @ 0x0822D276
	.string "うおおおおーーーーーーん!\pどうぐを いっぱい もってたのに\nまけたら ぜんぶ なくなっちゃった……\pうおおおおーーーーーーん!$"
	.if (. - gText_Rom_22D276) > 0x41
	.error "gText_Rom_22D276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D276) < 0x41
	.space 0x41 - (. - gText_Rom_22D276)
	.endif
