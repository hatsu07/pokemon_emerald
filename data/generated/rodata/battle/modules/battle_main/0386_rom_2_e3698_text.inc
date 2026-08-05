	@ src/battle_main.c:330 battle_main_line_330
	.globl gText_Rom_2E3698
gText_Rom_2E3698: @ 0x082E3698
	.string "こんちゅうマニア$"
	.if (. - gText_Rom_2E3698) > 0x9
	.error "gText_Rom_2E3698 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3698) < 0x9
	.space 0x9 - (. - gText_Rom_2E3698)
	.endif
	.space 0x2, 0x00
