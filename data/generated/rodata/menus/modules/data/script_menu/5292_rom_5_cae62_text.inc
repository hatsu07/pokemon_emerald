	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE62
gText_Rom_5CAE62: @ 0x085CAE62
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_5CAE62) != 0x9
	.error "gText_Rom_5CAE62 must retain its original byte length"
	.endif
