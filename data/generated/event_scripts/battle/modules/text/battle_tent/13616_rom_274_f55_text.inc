	@ data/text/battle_tent.inc:130 VerdanturfTown_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_274F55
gText_Rom_274F55: @ 0x08274F55
	.string "バトルテント シダケかいじょうに\nちょうせん するか?$"
	.if (. - gText_Rom_274F55) > 0x1c
	.error "gText_Rom_274F55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F55) < 0x1c
	.space 0x1c - (. - gText_Rom_274F55)
	.endif
