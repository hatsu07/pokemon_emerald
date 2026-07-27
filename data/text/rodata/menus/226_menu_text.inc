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
	.incbin "baserom.gba", 0x5cae3a, 0x5

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
	.incbin "baserom.gba", 0x5cae44, 0xa

