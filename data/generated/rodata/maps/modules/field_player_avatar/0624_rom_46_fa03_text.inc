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
