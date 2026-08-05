	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:477 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor5thOpponent
	.globl gText_Rom_23246F
gText_Rom_23246F: @ 0x0823246F
	.string "つぎは 5せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_23246F) > 0x1e
	.error "gText_Rom_23246F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23246F) < 0x1e
	.space 0x1e - (. - gText_Rom_23246F)
	.endif
