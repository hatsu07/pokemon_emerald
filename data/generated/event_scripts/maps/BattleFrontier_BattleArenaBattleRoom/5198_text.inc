	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:508 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
	.globl gText_Rom_230972
gText_Rom_230972: @ 0x08230972
	.string "つぎは 2にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_230972) > 0x23
	.error "gText_Rom_230972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230972) < 0x23
	.space 0x23 - (. - gText_Rom_230972)
	.endif
