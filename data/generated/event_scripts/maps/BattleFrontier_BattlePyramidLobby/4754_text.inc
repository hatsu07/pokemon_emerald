	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:544 BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons
	.globl gText_Rom_22C6EA
gText_Rom_22C6EA: @ 0x0822C6EA
	.string "では つれていく ポケモンを\n3ひき おえらび くだされ!$"
	.if (. - gText_Rom_22C6EA) > 0x1e
	.error "gText_Rom_22C6EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C6EA) < 0x1e
	.space 0x1e - (. - gText_Rom_22C6EA)
	.endif
