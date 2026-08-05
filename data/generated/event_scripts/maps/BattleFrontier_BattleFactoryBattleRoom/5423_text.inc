	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:242 BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn
	.globl gText_Rom_232DFB
gText_Rom_232DFB: @ 0x08232DFB
	.string "ほらほら! はやく きなっ!"
	.byte EOS
	.if (. - gText_Rom_232DFB) > 0xf
	.error "gText_Rom_232DFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232DFB) < 0xf
	.space 0xf - (. - gText_Rom_232DFB)
	.endif
