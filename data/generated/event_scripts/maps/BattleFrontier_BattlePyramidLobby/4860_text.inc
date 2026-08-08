	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:705 BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing
	.globl gText_Rom_22D2B7
gText_Rom_22D2B7: @ 0x0822D2B7
	.string "おかえりなさいませ!\pピラミッドキングを たおし\nみごと バトルピラミッドを\lせいは されましたな!$"
	.if (. - gText_Rom_22D2B7) > 0x33
	.error "gText_Rom_22D2B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D2B7) < 0x33
	.space 0x33 - (. - gText_Rom_22D2B7)
	.endif
