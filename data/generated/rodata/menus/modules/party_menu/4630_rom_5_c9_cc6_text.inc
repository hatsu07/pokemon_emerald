	@ asm/party_menu.s:3711 sub_081B19A0
	.globl gText_Rom_5C9CC6
gText_Rom_5C9CC6: @ 0x085C9CC6
	.string "{0xFD}{0x02}から\n{0xFD}{0x03}を　あずかりました！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CC6) > 0x14
	.error "gText_Rom_5C9CC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CC6) < 0x14
	.space 0x14 - (. - gText_Rom_5C9CC6)
	.endif
