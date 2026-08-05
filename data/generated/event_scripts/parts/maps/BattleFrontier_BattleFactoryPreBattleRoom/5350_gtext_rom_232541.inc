	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:505 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType
	.globl gText_Rom_232541
gText_Rom_232541: @ 0x08232541
	.string "どうやら ほのおタイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232541) > 0x1a
	.error "gText_Rom_232541 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232541) < 0x1a
	.space 0x1a - (. - gText_Rom_232541)
	.endif
