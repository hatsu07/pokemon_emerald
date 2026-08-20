	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:471 BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame
	.globl gText_Rom_22B909
gText_Rom_22B909: @ 0x0822B909
	.string "レポートを かいて しゅうりょう するか?{EOS}"
	.if (. - gText_Rom_22B909) > 0x16
	.error "gText_Rom_22B909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B909) < 0x16
	.space 0x16 - (. - gText_Rom_22B909)
	.endif
