	@ data/text/cable_club.inc:244 CableClub_Text_PlayWhichBattleMode
	.globl gText_Rom_248500
gText_Rom_248500: @ 0x08248500
	.string "どちらの たいせんを しますか?$"
	.if (. - gText_Rom_248500) > 0x11
	.error "gText_Rom_248500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248500) < 0x11
	.space 0x11 - (. - gText_Rom_248500)
	.endif
