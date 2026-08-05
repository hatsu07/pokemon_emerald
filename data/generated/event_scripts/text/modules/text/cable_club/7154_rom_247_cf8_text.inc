	@ data/text/cable_club.inc:42 CableClub_Text_OkayToSaveProgress
	.globl gText_Rom_247CF8
gText_Rom_247CF8: @ 0x08247CF8
	.string "はじめる まえに レポートを\nかきますが よろしいですか?$"
	.if (. - gText_Rom_247CF8) > 0x1e
	.error "gText_Rom_247CF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247CF8) < 0x1e
	.space 0x1e - (. - gText_Rom_247CF8)
	.endif
