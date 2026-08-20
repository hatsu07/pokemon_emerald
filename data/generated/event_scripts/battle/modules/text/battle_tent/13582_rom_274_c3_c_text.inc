	@ data/text/battle_tent.inc:45 FallarborTown_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_274C3C
gText_Rom_274C3C: @ 0x08274C3C
	.string "レベル50と レベル100の へやが\nありますが どちらに まいられますかな?{EOS}"
	.if (. - gText_Rom_274C3C) > 0x28
	.error "gText_Rom_274C3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C3C) < 0x28
	.space 0x28 - (. - gText_Rom_274C3C)
	.endif
