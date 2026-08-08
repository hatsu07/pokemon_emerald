	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:485 BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor7thOpponent
	.globl gText_Rom_2324AB
gText_Rom_2324AB: @ 0x082324AB
	.string "いよいよ 7せんめ ですよ!\nじゅんびは よろしい ですか?"
	.byte EOS
	.if (. - gText_Rom_2324AB) > 0x1f
	.error "gText_Rom_2324AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324AB) < 0x1f
	.space 0x1f - (. - gText_Rom_2324AB)
	.endif
