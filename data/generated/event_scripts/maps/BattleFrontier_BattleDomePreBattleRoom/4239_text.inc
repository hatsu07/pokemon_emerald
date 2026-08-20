	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:352 BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame (+1 aliases)
	.globl gText_Rom_22242F
gText_Rom_22242F: @ 0x0822242F
	.string "レポートを かいて しゅうりょう しますか?{EOS}"
	.if (. - gText_Rom_22242F) > 0x17
	.error "gText_Rom_22242F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22242F) < 0x17
	.space 0x17 - (. - gText_Rom_22242F)
	.endif
