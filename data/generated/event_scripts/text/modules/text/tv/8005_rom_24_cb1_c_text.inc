	@ data/text/tv.inc:43 BattleFrontier_BattleTowerLobby_Text_DescribeYourBattle
	.globl gText_Rom_24CB1C
gText_Rom_24CB1C: @ 0x0824CB1C
	.string "あぁっ あと\nもう ひとつだけ いいですか?\pこの たたかいの かんそうを\nひとことで ビシッと きかせてください!$"
	.if (. - gText_Rom_24CB1C) > 0x3b
	.error "gText_Rom_24CB1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CB1C) < 0x3b
	.space 0x3b - (. - gText_Rom_24CB1C)
	.endif
