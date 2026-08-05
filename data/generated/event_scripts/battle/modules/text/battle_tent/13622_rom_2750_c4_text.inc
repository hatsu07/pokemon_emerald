	@ data/text/battle_tent.inc:161 VerdanturfTown_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_2750C4
gText_Rom_2750C4: @ 0x082750C4
	.string "レベル50の へやと レベル100の へやが\nあるが どちらに ちょうせん するのだ?$"
	.if (. - gText_Rom_2750C4) > 0x2c
	.error "gText_Rom_2750C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2750C4) < 0x2c
	.space 0x2c - (. - gText_Rom_2750C4)
	.endif
