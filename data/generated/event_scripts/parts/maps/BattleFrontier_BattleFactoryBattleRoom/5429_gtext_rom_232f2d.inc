	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:267 BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass
	.globl gText_Rom_232F2D
gText_Rom_232F2D: @ 0x08232F2D
	.string "ダツラ『イイぜ!\nフロンティアパス かしな!"
	.byte EOS
	.if (. - gText_Rom_232F2D) > 0x17
	.error "gText_Rom_232F2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232F2D) < 0x17
	.space 0x17 - (. - gText_Rom_232F2D)
	.endif
