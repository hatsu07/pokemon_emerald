	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:473 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor4thOpponent
	.globl gText_Rom_232451
gText_Rom_232451: @ 0x08232451
	.string "つぎは 4せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_232451) > 0x1e
	.error "gText_Rom_232451 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232451) < 0x1e
	.space 0x1e - (. - gText_Rom_232451)
	.endif
