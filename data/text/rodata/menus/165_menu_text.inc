	@ src/main_menu.c:499 main_menu_line_499
	.globl gText_Rom_5B79D1
gText_Rom_5B79D1: @ 0x085B79D1
	.string "リュウ$"
	.if (. - gText_Rom_5B79D1) > 0x4
	.error "gText_Rom_5B79D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B79D1) < 0x4
	.space 0x4 - (. - gText_Rom_5B79D1)
	.endif
	.incbin "baserom.gba", 0x5b79d5, 0x9ef

