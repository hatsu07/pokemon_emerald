	@ data/text/cable_club.inc:120 RecordCorner_Text_PlayerSentOverOneX
	.globl gText_Rom_247FB9
gText_Rom_247FB9: @ 0x08247FB9
	.string "{STR_VAR_1}さんから\n{STR_VAR_2}が おくられてきた!$"
	.if (. - gText_Rom_247FB9) > 0x14
	.error "gText_Rom_247FB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FB9) < 0x14
	.space 0x14 - (. - gText_Rom_247FB9)
	.endif
