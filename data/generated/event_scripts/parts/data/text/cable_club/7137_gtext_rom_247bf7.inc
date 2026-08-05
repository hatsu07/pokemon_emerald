	@ data/text/cable_club.inc:13 CableClub_Text_RecordCornerUsingLinkCable
	.globl gText_Rom_247BF7
gText_Rom_247BF7: @ 0x08247BF7
	.string "ケーブルで つないだ おともだちと\nレコードコーナーが できます$"
	.if (. - gText_Rom_247BF7) > 0x21
	.error "gText_Rom_247BF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BF7) < 0x21
	.space 0x21 - (. - gText_Rom_247BF7)
	.endif
