	@ data/text/cable_club.inc:7 CableClub_Text_TradeUsingLinkCable
	.globl gText_Rom_247BB3
gText_Rom_247BB3: @ 0x08247BB3
	.string "ケーブルで つないだ おともだちと\nポケモン こうかんが できます$"
	.if (. - gText_Rom_247BB3) > 0x22
	.error "gText_Rom_247BB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BB3) < 0x22
	.space 0x22 - (. - gText_Rom_247BB3)
	.endif
