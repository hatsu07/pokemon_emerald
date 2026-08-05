	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:521 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInIceType
	.globl gText_Rom_2325A7
gText_Rom_2325A7: @ 0x082325A7
	.string "どうやら こおりタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325A7) > 0x1a
	.error "gText_Rom_2325A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325A7) < 0x1a
	.space 0x1a - (. - gText_Rom_2325A7)
	.endif
