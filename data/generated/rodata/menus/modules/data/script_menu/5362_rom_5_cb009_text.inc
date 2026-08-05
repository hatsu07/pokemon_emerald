	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Rom_5CB009
gText_Rom_5CB009: @ 0x085CB009
	.string "リタイア$"
	.if (. - gText_Rom_5CB009) > 0x5
	.error "gText_Rom_5CB009 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB009) < 0x5
	.space 0x5 - (. - gText_Rom_5CB009)
	.endif
