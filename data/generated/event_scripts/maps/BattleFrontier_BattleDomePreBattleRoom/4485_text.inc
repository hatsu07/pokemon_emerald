	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:310 BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete
	.globl gText_Rom_22856C
gText_Rom_22856C: @ 0x0822856C
	.string "これで じゅんけっしょうが\nすべて しゅうりょう しました!\pかちあがりを ごらん ください!$"
	.if (. - gText_Rom_22856C) > 0x30
	.error "gText_Rom_22856C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22856C) < 0x30
	.space 0x30 - (. - gText_Rom_22856C)
	.endif
