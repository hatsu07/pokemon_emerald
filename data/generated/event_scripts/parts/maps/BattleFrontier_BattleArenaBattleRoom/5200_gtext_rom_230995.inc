	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:512 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
	.globl gText_Rom_230995
gText_Rom_230995: @ 0x08230995
	.string "つぎは 3にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_230995) > 0x23
	.error "gText_Rom_230995 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230995) < 0x23
	.space 0x23 - (. - gText_Rom_230995)
	.endif
