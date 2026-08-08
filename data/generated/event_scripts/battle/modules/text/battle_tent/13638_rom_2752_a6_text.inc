	@ data/text/battle_tent.inc:207 VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak
	.globl gText_Rom_2752A6
gText_Rom_2752A6: @ 0x082752A6
	.string "3にんぬき たっせい とは……\pおぬしと ポケモンの こころの きずなは\nまことの ようじゃな……$"
	.if (. - gText_Rom_2752A6) > 0x32
	.error "gText_Rom_2752A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752A6) < 0x32
	.space 0x32 - (. - gText_Rom_2752A6)
	.endif
