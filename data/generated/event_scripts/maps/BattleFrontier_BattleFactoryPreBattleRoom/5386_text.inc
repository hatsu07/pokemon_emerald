	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:581 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance
	.globl gText_Rom_232726
gText_Rom_232726: @ 0x08232726
	.string "『まだまだ これから!』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232726) > 0x23
	.error "gText_Rom_232726 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232726) < 0x23
	.space 0x23 - (. - gText_Rom_232726)
	.endif
