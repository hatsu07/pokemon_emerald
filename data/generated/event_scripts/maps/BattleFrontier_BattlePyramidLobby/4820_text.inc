	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:645 BattleFrontier_BattlePyramidLobby_Text_HintPPWaste
	.globl gText_Rom_22CD44
gText_Rom_22CD44: @ 0x0822CD44
	.string "すさまじい プレッシャーと おんねん……\nうらみの ちからが みえます……\pそして……\nパワーポイントが なくなり\lわるあがきを する\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CD44) > 0x56
	.error "gText_Rom_22CD44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CD44) < 0x56
	.space 0x56 - (. - gText_Rom_22CD44)
	.endif
