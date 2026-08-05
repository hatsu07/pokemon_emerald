	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rom_4E8B80
gText_Rom_4E8B80: @ 0x084E8B80
	.string "やすむ$"
	.if (. - gText_Rom_4E8B80) > 0x4
	.error "gText_Rom_4E8B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B80) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B80)
	.endif
