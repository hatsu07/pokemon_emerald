	@ src/data/script_menu.h:500 script_menu_line_500 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAE4
gText_Rom_5CAAE4: @ 0x085CAAE4
	.string "シングルバトル$"
	.if (. - gText_Rom_5CAAE4) != 0x8
	.error "gText_Rom_5CAAE4 must retain its original byte length"
	.endif
