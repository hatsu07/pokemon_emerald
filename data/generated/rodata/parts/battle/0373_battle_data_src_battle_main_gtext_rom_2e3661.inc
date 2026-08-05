	@ src/battle_main.c:325 battle_main_line_325 (+1 aliases)
	.globl gText_Rom_2E3661
gText_Rom_2E3661: @ 0x082E3661
	.string "かいじゅうマニア$"
	.if (. - gText_Rom_2E3661) > 0x9
	.error "gText_Rom_2E3661 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3661) < 0x9
	.space 0x9 - (. - gText_Rom_2E3661)
	.endif
	.space 0x2, 0x00
