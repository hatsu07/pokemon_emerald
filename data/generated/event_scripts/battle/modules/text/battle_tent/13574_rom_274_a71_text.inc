	@ data/text/battle_tent.inc:7 FallarborTown_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_274A71
gText_Rom_274A71: @ 0x08274A71
	.string "かちぬきチームバトルに\nちょうせん されますかな?$"
	.if (. - gText_Rom_274A71) > 0x1a
	.error "gText_Rom_274A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A71) < 0x1a
	.space 0x1a - (. - gText_Rom_274A71)
	.endif
