	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Retire
gText_Retire: @ 0x084E8B7B
	.string "リタイア{EOS}"
	.if (. - gText_Retire) > 0x5
	.error "gText_Retire may not grow beyond its original slot"
	.endif
	.if (. - gText_Retire) < 0x5
	.space 0x5 - (. - gText_Retire)
	.endif

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rest
gText_Rest: @ 0x084E8B80
	.string "やすむ{EOS}"
	.if (. - gText_Rest) > 0x4
	.error "gText_Rest may not grow beyond its original slot"
	.endif
	.if (. - gText_Rest) < 0x4
	.space 0x4 - (. - gText_Rest)
	.endif
