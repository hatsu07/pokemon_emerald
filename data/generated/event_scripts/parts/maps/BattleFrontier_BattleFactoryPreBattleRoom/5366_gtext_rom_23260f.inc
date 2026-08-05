	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:537 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFlyingType
	.globl gText_Rom_23260F
gText_Rom_23260F: @ 0x0823260F
	.string "どうやら ひこうタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_23260F) > 0x1a
	.error "gText_Rom_23260F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23260F) < 0x1a
	.space 0x1a - (. - gText_Rom_23260F)
	.endif
