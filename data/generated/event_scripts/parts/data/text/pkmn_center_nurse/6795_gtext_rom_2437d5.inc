	@ data/text/pkmn_center_nurse.inc:22 gText_WelcomeCutShort
	.globl gText_Rom_2437D5
gText_Rom_2437D5: @ 0x082437D5
	.string "おつかれさまです!\nポケモン センター です\pここでは ポケモンの\nたいりょく かいふくを します\pあなたの ポケモンを……$"
	.if (. - gText_Rom_2437D5) > 0x3f
	.error "gText_Rom_2437D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2437D5) < 0x3f
	.space 0x3f - (. - gText_Rom_2437D5)
	.endif
