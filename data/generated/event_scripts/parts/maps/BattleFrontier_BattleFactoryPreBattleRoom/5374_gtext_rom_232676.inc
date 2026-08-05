	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:553 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGhostType
	.globl gText_Rom_232676
gText_Rom_232676: @ 0x08232676
	.string "どうやら ゴーストタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232676) > 0x1b
	.error "gText_Rom_232676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232676) < 0x1b
	.space 0x1b - (. - gText_Rom_232676)
	.endif
