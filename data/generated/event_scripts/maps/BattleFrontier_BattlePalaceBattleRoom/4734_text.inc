	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:550 BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah
	.globl gText_Rom_22BBDF
gText_Rom_22BBDF: @ 0x0822BBDF
	.string "…… …… …… かーっ!!!$"
	.if (. - gText_Rom_22BBDF) > 0x10
	.error "gText_Rom_22BBDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BBDF) < 0x10
	.space 0x10 - (. - gText_Rom_22BBDF)
	.endif
