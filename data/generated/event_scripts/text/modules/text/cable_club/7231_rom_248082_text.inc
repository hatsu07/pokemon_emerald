	@ data/text/cable_club.inc:158 CableClub_Text_GuideToVariousServices
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_248082
gText_Rom_248082: @ 0x08248082
	.string "ワイヤレス クラブでの\nあそびかたを せつめいします$"
	.if (. - gText_Rom_248082) != 0x1b
	.error "gText_Rom_248082 must retain its original byte length"
	.endif
