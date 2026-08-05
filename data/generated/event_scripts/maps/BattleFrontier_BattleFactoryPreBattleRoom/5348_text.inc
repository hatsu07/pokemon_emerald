	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:501 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInNormalType
	.globl gText_Rom_232526
gText_Rom_232526: @ 0x08232526
	.string "どうやら ノーマルタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232526) > 0x1b
	.error "gText_Rom_232526 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232526) < 0x1b
	.space 0x1b - (. - gText_Rom_232526)
	.endif
