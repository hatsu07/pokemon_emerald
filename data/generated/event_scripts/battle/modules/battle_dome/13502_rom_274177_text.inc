	@ src/battle_dome.c:1003 battle_dome_line_1003
	.globl gText_Rom_274177
gText_Rom_274177: @ 0x08274177
	.string "{STR_VAR_2} などで {STR_VAR_1} ゆうしょう!$"
	.if (. - gText_Rom_274177) > 0x11
	.error "gText_Rom_274177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274177) < 0x11
	.space 0x11 - (. - gText_Rom_274177)
	.endif
