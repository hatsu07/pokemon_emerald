	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:465 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
	.globl gText_Rom_232415
gText_Rom_232415: @ 0x08232415
	.string "つぎは 2せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_232415) > 0x1e
	.error "gText_Rom_232415 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232415) < 0x1e
	.space 0x1e - (. - gText_Rom_232415)
	.endif
