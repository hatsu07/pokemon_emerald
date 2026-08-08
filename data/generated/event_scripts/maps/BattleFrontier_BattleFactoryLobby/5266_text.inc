	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:370 BattleFrontier_BattleFactoryLobby_Text_StepThisWay (+1 aliases)
	.globl gText_Rom_2314CD
gText_Rom_2314CD: @ 0x082314CD
	.string "さあさあ こちらに どうぞ!"
	.byte EOS
	.if (. - gText_Rom_2314CD) > 0xf
	.error "gText_Rom_2314CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2314CD) < 0xf
	.space 0xf - (. - gText_Rom_2314CD)
	.endif
