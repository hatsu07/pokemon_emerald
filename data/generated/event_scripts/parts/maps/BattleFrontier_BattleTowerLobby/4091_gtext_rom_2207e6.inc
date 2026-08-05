	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:977 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon
	.globl gText_Rom_2207E6
gText_Rom_2207E6: @ 0x082207E6
	.string "じゃあ しょうぶに かったときの\nきもちを きかせて もらおうかなー"
	.byte EOS
	.if (. - gText_Rom_2207E6) > 0x23
	.error "gText_Rom_2207E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2207E6) < 0x23
	.space 0x23 - (. - gText_Rom_2207E6)
	.endif
