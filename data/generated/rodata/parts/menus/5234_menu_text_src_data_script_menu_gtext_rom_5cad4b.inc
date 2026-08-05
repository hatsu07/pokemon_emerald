	@ src/data/script_menu.h:552 script_menu_line_552
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD4B
gText_Rom_5CAD4B: @ 0x085CAD4B
	.string "マスターランク$"
	.if (. - gText_Rom_5CAD4B) != 0x8
	.error "gText_Rom_5CAD4B must retain its original byte length"
	.endif
