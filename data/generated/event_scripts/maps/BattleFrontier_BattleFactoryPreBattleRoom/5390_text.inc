	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:589 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow
	.globl gText_Rom_23276B
gText_Rom_23276B: @ 0x0823276B
	.string "『くもゆき しだい』の バトルを\nこころがけている かたの ようですよ!"
	.byte EOS
	.if (. - gText_Rom_23276B) > 0x25
	.error "gText_Rom_23276B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23276B) < 0x25
	.space 0x25 - (. - gText_Rom_23276B)
	.endif
