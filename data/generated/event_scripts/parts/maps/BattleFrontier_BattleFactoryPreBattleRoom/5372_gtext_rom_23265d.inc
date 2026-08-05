	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:549 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType
	.globl gText_Rom_23265D
gText_Rom_23265D: @ 0x0823265D
	.string "どうやら いわタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23265D) > 0x19
	.error "gText_Rom_23265D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23265D) < 0x19
	.space 0x19 - (. - gText_Rom_23265D)
	.endif
