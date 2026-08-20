	@ src/battle_dome.c:1002 battle_dome_line_1002
	.globl gText_Rom_274166
gText_Rom_274166: @ 0x08274166
	.string "{STR_VAR_2} などで {STR_VAR_1}が しょうり!{EOS}"
	.if (. - gText_Rom_274166) > 0x11
	.error "gText_Rom_274166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274166) < 0x11
	.space 0x11 - (. - gText_Rom_274166)
	.endif
