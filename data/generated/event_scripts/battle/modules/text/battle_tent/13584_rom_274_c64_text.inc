	@ data/text/battle_tent.inc:49 FallarborTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_274C64
gText_Rom_274C64: @ 0x08274C64
	.string "では ちょうせんする ポケモンを\n3ひき おえらび くだされ!$"
	.if (. - gText_Rom_274C64) > 0x20
	.error "gText_Rom_274C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C64) < 0x20
	.space 0x20 - (. - gText_Rom_274C64)
	.endif
