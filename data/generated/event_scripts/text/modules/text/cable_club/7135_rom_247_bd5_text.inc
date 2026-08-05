	@ data/text/cable_club.inc:10 CableClub_Text_BattleUsingLinkCable
	.globl gText_Rom_247BD5
gText_Rom_247BD5: @ 0x08247BD5
	.string "ケーブルで つないだ おともだちと\nポケモン たいせんが できます$"
	.if (. - gText_Rom_247BD5) > 0x22
	.error "gText_Rom_247BD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BD5) < 0x22
	.space 0x22 - (. - gText_Rom_247BD5)
	.endif
