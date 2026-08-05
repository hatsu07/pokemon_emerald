	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:533 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGroundType
	.globl gText_Rom_2325F5
gText_Rom_2325F5: @ 0x082325F5
	.string "どうやら じめんタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325F5) > 0x1a
	.error "gText_Rom_2325F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325F5) < 0x1a
	.space 0x1a - (. - gText_Rom_2325F5)
	.endif
