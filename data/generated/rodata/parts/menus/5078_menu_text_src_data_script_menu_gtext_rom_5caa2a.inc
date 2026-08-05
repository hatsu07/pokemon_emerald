	@ src/data/script_menu.h:21 script_menu_line_21
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA2A
gText_Rom_5CAA2A: @ 0x085CAA2A
	.string "コンテストの しゅるい$"
	.if (. - gText_Rom_5CAA2A) != 0xc
	.error "gText_Rom_5CAA2A must retain its original byte length"
	.endif
