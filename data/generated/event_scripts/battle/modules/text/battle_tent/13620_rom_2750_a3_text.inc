	@ data/text/battle_tent.inc:156 VerdanturfTown_BattleTentLobby_Text_ReturnFortified
	.globl gText_Rom_2750A3
gText_Rom_2750A3: @ 0x082750A3
	.string "おのれの こころと ポケモンを きたえたら\nまた くるがよい……$"
	.if (. - gText_Rom_2750A3) > 0x21
	.error "gText_Rom_2750A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2750A3) < 0x21
	.space 0x21 - (. - gText_Rom_2750A3)
	.endif
