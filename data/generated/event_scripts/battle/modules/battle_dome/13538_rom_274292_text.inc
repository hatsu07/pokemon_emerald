	@ src/battle_dome.c:995 battle_dome_line_995
	.globl gText_Rom_274292
gText_Rom_274292: @ 0x08274292
	.string "じゅんけっしょう だい2しあい$"
	.if (. - gText_Rom_274292) > 0x10
	.error "gText_Rom_274292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274292) < 0x10
	.space 0x10 - (. - gText_Rom_274292)
	.endif
