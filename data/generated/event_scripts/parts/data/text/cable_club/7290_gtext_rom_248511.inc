	@ data/text/cable_club.inc:247 CableClub_Text_AccessRecordCorner
	.globl gText_Rom_248511
gText_Rom_248511: @ 0x08248511
	.string "レコードコーナーを しますか?$"
	.if (. - gText_Rom_248511) > 0x10
	.error "gText_Rom_248511 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248511) < 0x10
	.space 0x10 - (. - gText_Rom_248511)
	.endif
