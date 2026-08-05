	@ data/text/cable_club.inc:235 MossdeepCity_GameCorner_1F_Text_RetryPlease
	.globl gText_Rom_24848B
gText_Rom_24848B: @ 0x0824848B
	.string "もういちど はじめから\nやりなおして みて くれるかな?$"
	.if (. - gText_Rom_24848B) > 0x1d
	.error "gText_Rom_24848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24848B) < 0x1d
	.space 0x1d - (. - gText_Rom_24848B)
	.endif
