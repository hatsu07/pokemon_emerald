	@ src/battle_dome.c:865 battle_dome_line_865
	.globl gText_Rom_2739B2
gText_Rom_2739B2: @ 0x082739B2
	.string "トップクラスの ちからを そなえた チーム。$"
	.if (. - gText_Rom_2739B2) > 0x17
	.error "gText_Rom_2739B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739B2) < 0x17
	.space 0x17 - (. - gText_Rom_2739B2)
	.endif
