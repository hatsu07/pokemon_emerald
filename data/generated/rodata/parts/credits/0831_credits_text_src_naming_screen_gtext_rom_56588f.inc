	@ src/naming_screen.c:2640 naming_screen_line_2640
	.globl gText_Rom_56588F
gText_Rom_56588F: @ 0x0856588F
	.string "おじさんに ことばを おしえよう$"
	.if (. - gText_Rom_56588F) > 0x11
	.error "gText_Rom_56588F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56588F) < 0x11
	.space 0x11 - (. - gText_Rom_56588F)
	.endif
