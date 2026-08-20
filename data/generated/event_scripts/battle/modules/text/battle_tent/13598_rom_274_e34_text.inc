	@ data/text/battle_tent.inc:93 FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
	.globl gText_Rom_274E34
gText_Rom_274E34: @ 0x08274E34
	.string "レポートを かきますので\nおまちくだされ!{EOS}"
	.if (. - gText_Rom_274E34) > 0x16
	.error "gText_Rom_274E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E34) < 0x16
	.space 0x16 - (. - gText_Rom_274E34)
	.endif
