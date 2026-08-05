	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CAADF
gText_Rom_5CAADF: @ 0x085CAADF
	.string "せつめい$"
	.if (. - gText_Rom_5CAADF) > 0x5
	.error "gText_Rom_5CAADF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAADF) < 0x5
	.space 0x5 - (. - gText_Rom_5CAADF)
	.endif
