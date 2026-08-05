	@ src/data/script_menu.h:842 gText_OneIsland
	.globl gText_Rom_57CB66
gText_Rom_57CB66: @ 0x0857CB66
	.string "1のしま$"
	.if (. - gText_Rom_57CB66) > 0x5
	.error "gText_Rom_57CB66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB66) < 0x5
	.space 0x5 - (. - gText_Rom_57CB66)
	.endif
