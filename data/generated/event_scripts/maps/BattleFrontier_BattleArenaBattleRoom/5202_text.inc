	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:516 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent
	.globl gText_Rom_2309B8
gText_Rom_2309B8: @ 0x082309B8
	.string "つぎは 4にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_2309B8) > 0x23
	.error "gText_Rom_2309B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2309B8) < 0x23
	.space 0x23 - (. - gText_Rom_2309B8)
	.endif
