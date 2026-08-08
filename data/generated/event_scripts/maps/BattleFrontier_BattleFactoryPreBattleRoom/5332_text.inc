	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:469 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
	.globl gText_Rom_232433
gText_Rom_232433: @ 0x08232433
	.string "つぎは 3せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_232433) > 0x1e
	.error "gText_Rom_232433 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232433) < 0x1e
	.space 0x1e - (. - gText_Rom_232433)
	.endif
