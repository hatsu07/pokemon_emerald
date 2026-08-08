	@ asm/field_player_avatar.s:4692 Fishing10
	.globl gText_Rom_46F9E8
gText_Rom_46F9E8: @ 0x0846F9E8
	.string "ポケモンを　つりあげた！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9E8) > 0xf
	.error "gText_Rom_46F9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46F9E8) < 0xf
	.space 0xf - (. - gText_Rom_46F9E8)
	.endif
	.globl gUnknown_846F9F7
gUnknown_846F9F7: @ 0x0846F9F7

	@ asm/field_player_avatar.s:4855 Fishing12
	.globl gText_Rom_46F9F7
gText_Rom_46F9F7: @ 0x0846F9F7
	.string "つれないなあ・・・{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9F7) > 0xc
	.error "gText_Rom_46F9F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46F9F7) < 0xc
	.space 0xc - (. - gText_Rom_46F9F7)
	.endif
	.globl gUnknown_846FA03
gUnknown_846FA03: @ 0x0846FA03

	@ asm/field_player_avatar.s:4906 Fishing13
	.globl gText_Rom_46FA03
gText_Rom_46FA03: @ 0x0846FA03
	.string "にげられて　しまった・・・{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46FA03) > 0x10
	.error "gText_Rom_46FA03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46FA03) < 0x10
	.space 0x10 - (. - gText_Rom_46FA03)
	.endif
