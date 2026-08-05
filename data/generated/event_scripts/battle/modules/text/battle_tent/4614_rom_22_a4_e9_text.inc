	@ data/text/battle_tent.inc:156 VerdanturfTown_BattleTentLobby_Text_ReturnFortified
	.globl gText_Rom_22A4E9
gText_Rom_22A4E9: @ 0x0822A4E9
	.string "おのれの こころと ポケモンを きたえたら\nまた くるがよい……$"
	.if (. - gText_Rom_22A4E9) > 0x21
	.error "gText_Rom_22A4E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A4E9) < 0x21
	.space 0x21 - (. - gText_Rom_22A4E9)
	.endif
