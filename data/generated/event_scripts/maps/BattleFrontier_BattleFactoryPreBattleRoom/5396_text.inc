	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:601 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleFlexible
	.globl gText_Rom_2327D7
gText_Rom_2327D7: @ 0x082327D7
	.string "『りんきおうへん』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_2327D7) > 0x20
	.error "gText_Rom_2327D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2327D7) < 0x20
	.space 0x20 - (. - gText_Rom_2327D7)
	.endif
