	@ src/naming_screen.c:2607 naming_screen_line_2607
	.globl gText_Rom_565868
gText_Rom_565868: @ 0x08565868
	.string "あなた の なまえは?$"
	.if (. - gText_Rom_565868) > 0xc
	.error "gText_Rom_565868 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565868) < 0xc
	.space 0xc - (. - gText_Rom_565868)
	.endif
