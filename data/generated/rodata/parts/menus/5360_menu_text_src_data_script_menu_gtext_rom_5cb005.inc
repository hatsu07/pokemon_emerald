	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rom_5CB005
gText_Rom_5CB005: @ 0x085CB005
	.string "やすむ$"
	.if (. - gText_Rom_5CB005) > 0x4
	.error "gText_Rom_5CB005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB005) < 0x4
	.space 0x4 - (. - gText_Rom_5CB005)
	.endif
