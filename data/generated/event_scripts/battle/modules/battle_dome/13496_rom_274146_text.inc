	@ src/battle_dome.c:962 battle_dome_line_962
	.globl gText_Rom_274146
gText_Rom_274146: @ 0x08274146
	.string "バランスよく ポケモンを そだてている。$"
	.if (. - gText_Rom_274146) > 0x15
	.error "gText_Rom_274146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274146) < 0x15
	.space 0x15 - (. - gText_Rom_274146)
	.endif
