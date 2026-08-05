	@ src/data/script_menu.h:535 script_menu_line_535 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DC0
gText_Rom_2C1DC0: @ 0x082C1DC0
	.string "ポケモンジャンプ$"
	.if (. - gText_Rom_2C1DC0) != 0x9
	.error "gText_Rom_2C1DC0 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1DC4
	.set gText_Rom_2C1DC4, gText_Rom_2C1DC0 + 0x4
	.space 0x3, 0x00

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DCC
gText_Rom_2C1DCC: @ 0x082C1DCC
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_2C1DCC) != 0x9
	.error "gText_Rom_2C1DCC must retain its original byte length"
	.endif
