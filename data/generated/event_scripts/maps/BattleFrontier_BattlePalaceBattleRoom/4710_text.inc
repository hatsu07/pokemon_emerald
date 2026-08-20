	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:478 BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
	.globl gText_Rom_22B931
gText_Rom_22B931: @ 0x0822B931
	.string "レポートを かいておる……\nしばし またれよ……{EOS}"
	.if (. - gText_Rom_22B931) > 0x19
	.error "gText_Rom_22B931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B931) < 0x19
	.space 0x19 - (. - gText_Rom_22B931)
	.endif
