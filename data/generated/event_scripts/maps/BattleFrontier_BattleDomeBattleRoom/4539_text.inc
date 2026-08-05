	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:981 BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
	.globl gText_Rom_2296A5
gText_Rom_2296A5: @ 0x082296A5
	.string "さらなる うえを めざして!\p$"
	.if (. - gText_Rom_2296A5) > 0x10
	.error "gText_Rom_2296A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296A5) < 0x10
	.space 0x10 - (. - gText_Rom_2296A5)
	.endif
