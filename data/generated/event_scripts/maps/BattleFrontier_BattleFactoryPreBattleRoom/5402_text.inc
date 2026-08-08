	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:613 BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon
	.globl gText_Rom_232839
gText_Rom_232839: @ 0x08232839
	.string "では バトルを はじめる まえに\nポケモンの こうかんを おこないますか?"
	.byte EOS
	.if (. - gText_Rom_232839) > 0x26
	.error "gText_Rom_232839 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232839) < 0x26
	.space 0x26 - (. - gText_Rom_232839)
	.endif
