	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:504 BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored
	.globl gText_Rom_230958
gText_Rom_230958: @ 0x08230958
	.string "ポケモンの たいりょくを\nかいふく いたしますぞ!"
	.byte EOS
	.if (. - gText_Rom_230958) > 0x1a
	.error "gText_Rom_230958 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230958) < 0x1a
	.space 0x1a - (. - gText_Rom_230958)
	.endif
