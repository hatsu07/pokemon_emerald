	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DCC
gText_Rom_2C1DCC: @ 0x082C1DCC
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_2C1DCC) != 0x9
	.error "gText_Rom_2C1DCC must retain its original byte length"
	.endif
