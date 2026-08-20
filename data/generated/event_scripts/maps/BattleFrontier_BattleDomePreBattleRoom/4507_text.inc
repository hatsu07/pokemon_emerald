	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:360 BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
	.globl gText_Rom_2286F9
gText_Rom_2286F9: @ 0x082286F9
	.string "レポートを かいています\nしばらく おまちくださいませ!{EOS}"
	.if (. - gText_Rom_2286F9) > 0x1d
	.error "gText_Rom_2286F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2286F9) < 0x1d
	.space 0x1d - (. - gText_Rom_2286F9)
	.endif
