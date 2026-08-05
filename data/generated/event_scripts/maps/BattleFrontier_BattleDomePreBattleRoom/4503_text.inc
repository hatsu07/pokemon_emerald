	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:352 BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame (+1 aliases)
	.globl gText_Rom_2286C5
gText_Rom_2286C5: @ 0x082286C5
	.string "レポートを かいて しゅうりょう しますか?$"
	.if (. - gText_Rom_2286C5) > 0x17
	.error "gText_Rom_2286C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2286C5) < 0x17
	.space 0x17 - (. - gText_Rom_2286C5)
	.endif
