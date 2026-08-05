	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:636 BattleFrontier_BattleFactoryPreBattleRoom_Text_UnderstoodSirWillDo
	.globl gText_Rom_2328EC
gText_Rom_2328EC: @ 0x082328EC
	.string "…… えっ …… ? ……ひぃっ!\nわっかりましたっ!! りょうかいです!"
	.byte EOS
	.if (. - gText_Rom_2328EC) > 0x26
	.error "gText_Rom_2328EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2328EC) < 0x26
	.space 0x26 - (. - gText_Rom_2328EC)
	.endif
