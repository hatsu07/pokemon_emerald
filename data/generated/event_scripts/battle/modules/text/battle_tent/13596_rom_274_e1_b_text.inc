	@ data/text/battle_tent.inc:89 FallarborTown_BattleTentLobby_Text_BeatThreeTrainers
	.globl gText_Rom_274E1B
gText_Rom_274E1B: @ 0x08274E1B
	.string "3にんぬき たっせい\nおみごとで ございました!{EOS}"
	.if (. - gText_Rom_274E1B) > 0x19
	.error "gText_Rom_274E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E1B) < 0x19
	.space 0x19 - (. - gText_Rom_274E1B)
	.endif
