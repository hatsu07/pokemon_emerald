	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:520 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent
	.globl gText_Rom_2309DB
gText_Rom_2309DB: @ 0x082309DB
	.string "つぎは 5にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_2309DB) > 0x23
	.error "gText_Rom_2309DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2309DB) < 0x23
	.space 0x23 - (. - gText_Rom_2309DB)
	.endif
