	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:609 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleUnrestrained
	.globl gText_Rom_232818
gText_Rom_232818: @ 0x08232818
	.string "『じゆう ほんぽう』な バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232818) > 0x21
	.error "gText_Rom_232818 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232818) < 0x21
	.space 0x21 - (. - gText_Rom_232818)
	.endif
