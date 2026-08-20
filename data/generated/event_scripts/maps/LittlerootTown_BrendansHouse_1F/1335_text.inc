	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:286 PlayersHouse_1F_Text_IsntItNiceInHere
	.globl gText_Rom_1EFA4C
gText_Rom_1EFA4C: @ 0x081EFA4C
	.string "ママ『ほら {PLAYER}!\nおうちの なかも すてき でしょ!{EOS}"
	.if (. - gText_Rom_1EFA4C) > 0x1c
	.error "gText_Rom_1EFA4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFA4C) < 0x1c
	.space 0x1c - (. - gText_Rom_1EFA4C)
	.endif
