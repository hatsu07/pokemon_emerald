	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:513 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInElectricType
	.globl gText_Rom_232574
gText_Rom_232574: @ 0x08232574
	.string "どうやら でんきタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232574) > 0x1a
	.error "gText_Rom_232574 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232574) < 0x1a
	.space 0x1a - (. - gText_Rom_232574)
	.endif
