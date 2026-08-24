	.4byte gText_Rom_5ABD22
	.4byte gText_Rom_5ABD26
	.4byte gText_Rom_5ABD2A
	.4byte gText_Rom_5ABD33

	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:977 BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope (+1 aliases)
	.globl gText_Rom_5ABD4C
gText_Rom_5ABD4C: @ 0x085ABD4C
	.string "きたいの おおがた しんじん!\p{EOS}"
	.if (. - gText_Rom_5ABD4C) > 0x11
	.error "gText_Rom_5ABD4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD4C) < 0x11
	.space 0x11 - (. - gText_Rom_5ABD4C)
	.endif

