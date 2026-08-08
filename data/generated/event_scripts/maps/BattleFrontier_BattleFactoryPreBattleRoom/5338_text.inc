	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:481 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent
	.globl gText_Rom_23248D
gText_Rom_23248D: @ 0x0823248D
	.string "つぎは 6せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_23248D) > 0x1e
	.error "gText_Rom_23248D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23248D) < 0x1e
	.space 0x1e - (. - gText_Rom_23248D)
	.endif
