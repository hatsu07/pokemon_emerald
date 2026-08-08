	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5CAE35
gText_Rom_5CAE35: @ 0x085CAE35
	.string "かった！$"
	.if (. - gText_Rom_5CAE35) > 0x5
	.error "gText_Rom_5CAE35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE35) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE35)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAE3A, size=0x5
	.byte 0x0C, 0x36, 0x03, 0x48, 0x16

	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5CAE3F
gText_Rom_5CAE3F: @ 0x085CAE3F
	.string "まけた！$"
	.if (. - gText_Rom_5CAE3F) > 0x5
	.error "gText_Rom_5CAE3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE3F) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE3F)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAE44, size=0xA
	.byte 0x05, 0x0C, 0x04, 0x15, 0x02, 0xFF, 0x64, 0x7A, 0xAE, 0x95

