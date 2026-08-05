	@ src/battle_dome.c:949 battle_dome_line_949
	.globl gText_Rom_274021
gText_Rom_274021: @ 0x08274021
	.string "こうげきと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_274021) > 0x19
	.error "gText_Rom_274021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274021) < 0x19
	.space 0x19 - (. - gText_Rom_274021)
	.endif
