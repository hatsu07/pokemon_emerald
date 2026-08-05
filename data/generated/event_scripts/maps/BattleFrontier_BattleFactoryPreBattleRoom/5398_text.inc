	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:605 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleImpossibleToPredict
	.globl gText_Rom_2327F7
gText_Rom_2327F7: @ 0x082327F7
	.string "『よそく ふかのう』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_2327F7) > 0x21
	.error "gText_Rom_2327F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2327F7) < 0x21
	.space 0x21 - (. - gText_Rom_2327F7)
	.endif
