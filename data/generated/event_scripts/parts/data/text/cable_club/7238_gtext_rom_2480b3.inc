	@ data/text/cable_club.inc:172 CableClub_Text_NeedBerryForBerryCrush
	.globl gText_Rom_2480B3
gText_Rom_2480B3: @ 0x082480B3
	.string "ひとつ まえに もどります$"
	.if (. - gText_Rom_2480B3) > 0xe
	.error "gText_Rom_2480B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480B3) < 0xe
	.space 0xe - (. - gText_Rom_2480B3)
	.endif
