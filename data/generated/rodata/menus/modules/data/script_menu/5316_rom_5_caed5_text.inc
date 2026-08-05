	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAED5
gText_Rom_5CAED5: @ 0x085CAED5
	.string "バトルポイント$"
	.if (. - gText_Rom_5CAED5) != 0x8
	.error "gText_Rom_5CAED5 must retain its original byte length"
	.endif
