	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:300 BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete
	.globl gText_Rom_228512
gText_Rom_228512: @ 0x08228512
	.string "これで 1かいせんが\nすべて しゅうりょう しました!\pかちあがりを ごらん ください!$"
	.if (. - gText_Rom_228512) > 0x2d
	.error "gText_Rom_228512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228512) < 0x2d
	.space 0x2d - (. - gText_Rom_228512)
	.endif
