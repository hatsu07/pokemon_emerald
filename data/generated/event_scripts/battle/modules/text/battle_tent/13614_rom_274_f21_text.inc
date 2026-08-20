	@ data/text/battle_tent.inc:124 VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_274F21
gText_Rom_274F21: @ 0x08274F21
	.string "バトルテント\nシダケかいじょうへ ようこそ\pここでは トレーナーの\nしんらいの こころを ためしておる{EOS}"
	.if (. - gText_Rom_274F21) > 0x34
	.error "gText_Rom_274F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F21) < 0x34
	.space 0x34 - (. - gText_Rom_274F21)
	.endif
