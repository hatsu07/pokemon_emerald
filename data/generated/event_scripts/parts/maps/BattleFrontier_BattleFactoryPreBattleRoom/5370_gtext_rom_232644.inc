	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:545 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInBugType
	.globl gText_Rom_232644
gText_Rom_232644: @ 0x08232644
	.string "どうやら むしタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232644) > 0x19
	.error "gText_Rom_232644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232644) < 0x19
	.space 0x19 - (. - gText_Rom_232644)
	.endif
