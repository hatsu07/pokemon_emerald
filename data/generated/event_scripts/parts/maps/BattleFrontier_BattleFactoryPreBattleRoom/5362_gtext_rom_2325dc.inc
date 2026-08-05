	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:529 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPoisonType
	.globl gText_Rom_2325DC
gText_Rom_2325DC: @ 0x082325DC
	.string "どうやら どくタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325DC) > 0x19
	.error "gText_Rom_2325DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325DC) < 0x19
	.space 0x19 - (. - gText_Rom_2325DC)
	.endif
