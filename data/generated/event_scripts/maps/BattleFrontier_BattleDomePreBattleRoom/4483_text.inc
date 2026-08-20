	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:305 BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete
	.globl gText_Rom_22853F
gText_Rom_22853F: @ 0x0822853F
	.string "これで 2かいせんが\nすべて しゅうりょう しました!\pかちあがりを ごらん ください!{EOS}"
	.if (. - gText_Rom_22853F) > 0x2d
	.error "gText_Rom_22853F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22853F) < 0x2d
	.space 0x2d - (. - gText_Rom_22853F)
	.endif
