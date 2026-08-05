	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:433 BattleFrontier_BattleArenaLobby_Text_GuideYouToArena
	.globl gText_Rom_22FAAA
gText_Rom_22FAAA: @ 0x0822FAAA
	.string "では バトルアリーナへ\nおつれいたしますぞ!"
	.byte EOS
	.if (. - gText_Rom_22FAAA) > 0x17
	.error "gText_Rom_22FAAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FAAA) < 0x17
	.space 0x17 - (. - gText_Rom_22FAAA)
	.endif
