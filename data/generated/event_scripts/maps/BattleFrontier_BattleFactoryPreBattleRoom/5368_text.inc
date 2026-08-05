	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:541 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType
	.globl gText_Rom_232629
gText_Rom_232629: @ 0x08232629
	.string "どうやら エスパータイプを\nとくいと して いて……"
	.byte EOS
	.if (. - gText_Rom_232629) > 0x1b
	.error "gText_Rom_232629 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232629) < 0x1b
	.space 0x1b - (. - gText_Rom_232629)
	.endif
