	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:528 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent
	.globl gText_Rom_230A21
gText_Rom_230A21: @ 0x08230A21
	.string "つぎは 7にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_230A21) > 0x23
	.error "gText_Rom_230A21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230A21) < 0x23
	.space 0x23 - (. - gText_Rom_230A21)
	.endif
