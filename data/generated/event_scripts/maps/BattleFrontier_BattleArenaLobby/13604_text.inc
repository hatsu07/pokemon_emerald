	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:466 BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize (+1 aliases)
	.globl gText_Rom_274E82
gText_Rom_274E82: @ 0x08274E82
	.string "……おおっ!\nどうぐが いっぱいの ようですな!\pどうぐを せいりしてから\nまた おこしくだされ!$"
	.if (. - gText_Rom_274E82) > 0x32
	.error "gText_Rom_274E82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E82) < 0x32
	.space 0x32 - (. - gText_Rom_274E82)
	.endif
