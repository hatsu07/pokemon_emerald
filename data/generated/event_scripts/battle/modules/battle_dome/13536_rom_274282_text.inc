	@ src/battle_dome.c:994 battle_dome_line_994
	.globl gText_Rom_274282
gText_Rom_274282: @ 0x08274282
	.string "じゅんけっしょう だい1しあい{EOS}"
	.if (. - gText_Rom_274282) > 0x10
	.error "gText_Rom_274282 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274282) < 0x10
	.space 0x10 - (. - gText_Rom_274282)
	.endif
