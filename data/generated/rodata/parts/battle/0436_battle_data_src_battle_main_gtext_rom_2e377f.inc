	@ src/battle_main.c:351 battle_main_line_351
	.globl gText_Rom_2E377F
gText_Rom_2E377F: @ 0x082E377F
	.string "マグマだんかんぶ$"
	.if (. - gText_Rom_2E377F) > 0x9
	.error "gText_Rom_2E377F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E377F) < 0x9
	.space 0x9 - (. - gText_Rom_2E377F)
	.endif
	.space 0x2, 0x00
