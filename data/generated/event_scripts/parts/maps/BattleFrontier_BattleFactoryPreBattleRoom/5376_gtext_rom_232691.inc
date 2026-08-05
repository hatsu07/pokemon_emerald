	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:557 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDragonType
	.globl gText_Rom_232691
gText_Rom_232691: @ 0x08232691
	.string "どうやら ドラゴンタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232691) > 0x1b
	.error "gText_Rom_232691 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232691) < 0x1b
	.space 0x1b - (. - gText_Rom_232691)
	.endif
