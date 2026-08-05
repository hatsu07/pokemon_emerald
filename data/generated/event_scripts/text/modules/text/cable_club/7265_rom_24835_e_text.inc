	@ data/text/cable_club.inc:209 MossdeepCity_GameCorner_1F_Text_AdapterNotConnected
	.globl gText_Rom_24835E
gText_Rom_24835E: @ 0x0824835E
	.string "ワイヤレスアダプタを つなげて\nあそびに おいで!$"
	.if (. - gText_Rom_24835E) > 0x1a
	.error "gText_Rom_24835E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24835E) < 0x1a
	.space 0x1a - (. - gText_Rom_24835E)
	.endif
