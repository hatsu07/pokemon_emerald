	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:370 BattleFrontier_BattleFactoryLobby_Text_StepThisWay (+1 aliases)
	.globl gText_Rom_275515
gText_Rom_275515: @ 0x08275515
	.string "さあさあ こちらに どうぞ!$"
	.if (. - gText_Rom_275515) > 0xf
	.error "gText_Rom_275515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275515) < 0xf
	.space 0xf - (. - gText_Rom_275515)
	.endif
