	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:345 BattleFrontier_OutsideWest_Text_CantFindBattleTower
	.globl gText_Rom_21F046
gText_Rom_21F046: @ 0x0821F046
	.string "バトルタワーに いきたいのに\nフロンティアパスの マップを みても\lなにが なんだか…… ひろすぎる……"
	.byte EOS
	.if (. - gText_Rom_21F046) > 0x35
	.error "gText_Rom_21F046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F046) < 0x35
	.space 0x35 - (. - gText_Rom_21F046)
	.endif
