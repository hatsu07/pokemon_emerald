	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:561 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDarkType
	.globl gText_Rom_2326AC
gText_Rom_2326AC: @ 0x082326AC
	.string "どうやら あくタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2326AC) > 0x19
	.error "gText_Rom_2326AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2326AC) < 0x19
	.space 0x19 - (. - gText_Rom_2326AC)
	.endif
