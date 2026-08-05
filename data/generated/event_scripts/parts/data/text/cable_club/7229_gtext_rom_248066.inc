	@ data/text/cable_club.inc:154 CableClub_Text_CanMixRecords
	.globl gText_Rom_248066
gText_Rom_248066: @ 0x08248066
	.string "2にんから 4にんの ともだちと\nレコードを まぜます$"
	.if (. - gText_Rom_248066) > 0x1c
	.error "gText_Rom_248066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248066) < 0x1c
	.space 0x1c - (. - gText_Rom_248066)
	.endif
