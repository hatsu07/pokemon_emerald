	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Rom_4E8B7B
gText_Rom_4E8B7B: @ 0x084E8B7B
	.string "リタイア$"
	.if (. - gText_Rom_4E8B7B) > 0x5
	.error "gText_Rom_4E8B7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B7B) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B7B)
	.endif
