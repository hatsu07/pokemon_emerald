	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:382 BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen
	.globl gText_Rom_233A0B
gText_Rom_233A0B: @ 0x08233A0B
	.string "…… おめでとう ございます……\nチューブクイーンに しょうりし\lゲームを クリア されましたね……"
	.byte EOS
	.if (. - gText_Rom_233A0B) > 0x33
	.error "gText_Rom_233A0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233A0B) < 0x33
	.space 0x33 - (. - gText_Rom_233A0B)
	.endif
