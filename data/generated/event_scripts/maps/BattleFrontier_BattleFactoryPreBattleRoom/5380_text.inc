	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:569 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInSteelType
	.globl gText_Rom_2326C5
gText_Rom_2326C5: @ 0x082326C5
	.string "どうやら はがねタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2326C5) > 0x1a
	.error "gText_Rom_2326C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2326C5) < 0x1a
	.space 0x1a - (. - gText_Rom_2326C5)
	.endif
