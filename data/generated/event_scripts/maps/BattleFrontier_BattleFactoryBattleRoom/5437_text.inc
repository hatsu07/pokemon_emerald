	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:291 BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn
	.globl gText_Rom_233012
gText_Rom_233012: @ 0x08233012
	.string "よっしゃ!! バチッと こい!!"
	.byte EOS
	.if (. - gText_Rom_233012) > 0x11
	.error "gText_Rom_233012 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233012) < 0x11
	.space 0x11 - (. - gText_Rom_233012)
	.endif
