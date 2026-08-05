	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:624 BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23288B
gText_Rom_23288B: @ 0x0823288B
	.string "ただいま レポートを かいて います……\nしょうしょう おまちください"
	.byte EOS
	.if (. - gText_Rom_23288B) != 0x24
	.error "gText_Rom_23288B must retain its original byte length"
	.endif
