	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAB13
gText_Rom_5CAB13: @ 0x085CAB13
	.string "オープンレベル$"
	.if (. - gText_Rom_5CAB13) != 0x8
	.error "gText_Rom_5CAB13 must retain its original byte length"
	.endif
