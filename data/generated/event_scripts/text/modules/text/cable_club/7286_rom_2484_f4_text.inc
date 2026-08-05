	@ data/text/cable_club.inc:241 CableClub_Text_TradePokemon
	.globl gText_Rom_2484F4
gText_Rom_2484F4: @ 0x082484F4
	.string "こうかんを しますか?$"
	.if (. - gText_Rom_2484F4) > 0xc
	.error "gText_Rom_2484F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2484F4) < 0xc
	.space 0xc - (. - gText_Rom_2484F4)
	.endif
