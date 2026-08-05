	@ data/text/cable_club.inc:84 CableClub_Text_TooBusyToNotice
	.globl gText_Rom_247E87
gText_Rom_247E87: @ 0x08247E87
	.string "とりこみちゅうの ようだ…$"
	.if (. - gText_Rom_247E87) > 0xe
	.error "gText_Rom_247E87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E87) < 0xe
	.space 0xe - (. - gText_Rom_247E87)
	.endif
