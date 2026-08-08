	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:540 BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
	.globl gText_Rom_230A7F
gText_Rom_230A7F: @ 0x08230A7F
	.string "レポートを かいております!\nしばし おまちくだされ!"
	.byte EOS
	.if (. - gText_Rom_230A7F) > 0x1c
	.error "gText_Rom_230A7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230A7F) < 0x1c
	.space 0x1c - (. - gText_Rom_230A7F)
	.endif
