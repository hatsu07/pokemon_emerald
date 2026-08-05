	@ src/data/script_menu.h:535 script_menu_line_535 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DC0
gText_Rom_2C1DC0: @ 0x082C1DC0
	.string "ポケモンジャンプ$"
	.if (. - gText_Rom_2C1DC0) != 0x9
	.error "gText_Rom_2C1DC0 must retain its original byte length"
	.endif
