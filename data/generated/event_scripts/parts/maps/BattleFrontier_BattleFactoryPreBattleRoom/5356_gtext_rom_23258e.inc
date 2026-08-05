	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:517 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGrassType
	.globl gText_Rom_23258E
gText_Rom_23258E: @ 0x0823258E
	.string "どうやら くさタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23258E) > 0x19
	.error "gText_Rom_23258E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23258E) < 0x19
	.space 0x19 - (. - gText_Rom_23258E)
	.endif
