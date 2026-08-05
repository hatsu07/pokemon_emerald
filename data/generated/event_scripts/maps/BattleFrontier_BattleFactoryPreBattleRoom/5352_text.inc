	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:509 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInWaterType
	.globl gText_Rom_23255B
gText_Rom_23255B: @ 0x0823255B
	.string "どうやら みずタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23255B) > 0x19
	.error "gText_Rom_23255B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23255B) < 0x19
	.space 0x19 - (. - gText_Rom_23255B)
	.endif
