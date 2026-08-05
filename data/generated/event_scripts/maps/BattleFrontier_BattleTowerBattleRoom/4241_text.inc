	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:479 BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
	.globl gText_Rom_222446
gText_Rom_222446: @ 0x08222446
	.string "レポートを かいています!\nしばらく おまちくださいませ!$"
	.if (. - gText_Rom_222446) > 0x1e
	.error "gText_Rom_222446 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222446) < 0x1e
	.space 0x1e - (. - gText_Rom_222446)
	.endif
