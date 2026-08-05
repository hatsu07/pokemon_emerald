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
