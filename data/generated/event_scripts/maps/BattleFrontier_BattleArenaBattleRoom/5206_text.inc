	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:524 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent
	.globl gText_Rom_2309FE
gText_Rom_2309FE: @ 0x082309FE
	.string "つぎは 6にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_2309FE) > 0x23
	.error "gText_Rom_2309FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2309FE) < 0x23
	.space 0x23 - (. - gText_Rom_2309FE)
	.endif
