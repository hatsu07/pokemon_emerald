	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:525 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType
	.globl gText_Rom_2325C1
gText_Rom_2325C1: @ 0x082325C1
	.string "どうやら かくとうタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_2325C1) > 0x1b
	.error "gText_Rom_2325C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2325C1) < 0x1b
	.space 0x1b - (. - gText_Rom_2325C1)
	.endif
