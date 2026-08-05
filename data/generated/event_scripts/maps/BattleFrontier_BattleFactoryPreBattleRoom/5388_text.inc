	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:585 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleHighRisk
	.globl gText_Rom_232749
gText_Rom_232749: @ 0x08232749
	.string "『けんこん いってき』の バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232749) > 0x22
	.error "gText_Rom_232749 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232749) < 0x22
	.space 0x22 - (. - gText_Rom_232749)
	.endif
