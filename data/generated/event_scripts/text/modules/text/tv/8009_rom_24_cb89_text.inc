	@ data/text/tv.inc:49 BattleFrontier_BattleTowerLobby_Text_SilentType
	.globl gText_Rom_24CB89
gText_Rom_24CB89: @ 0x0824CB89
	.string "そうですか……\pでも なにも いわないのも\nまた かっこいいですね!\pそれじゃあ またの きかいに\nかんそうを きかせて ください!$"
	.if (. - gText_Rom_24CB89) > 0x43
	.error "gText_Rom_24CB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CB89) < 0x43
	.space 0x43 - (. - gText_Rom_24CB89)
	.endif
