	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:466 BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize (+1 aliases)
	.globl gText_Rom_22FB90
gText_Rom_22FB90: @ 0x0822FB90
	.string "……おおっ!\nどうぐが いっぱいの ようですな!\pどうぐを せいりしてから\nまた おこしくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FB90) > 0x32
	.error "gText_Rom_22FB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB90) < 0x32
	.space 0x32 - (. - gText_Rom_22FB90)
	.endif
