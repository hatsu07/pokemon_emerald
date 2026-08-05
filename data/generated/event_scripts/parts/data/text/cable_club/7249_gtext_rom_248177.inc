	@ data/text/cable_club.inc:185 CableClub_Text_OhExcuseMe
	.globl gText_Rom_248177
gText_Rom_248177: @ 0x08248177
	.string "あ……\nおきゃくさま!$"
	.if (. - gText_Rom_248177) > 0xc
	.error "gText_Rom_248177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248177) < 0xc
	.space 0xc - (. - gText_Rom_248177)
	.endif
