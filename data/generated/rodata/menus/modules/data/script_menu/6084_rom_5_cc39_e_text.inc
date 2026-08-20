	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC39E
gText_Rom_5CC39E: @ 0x085CC39E
	.string "きのみクラッシュ{EOS}"
	.if (. - gText_Rom_5CC39E) != 0x9
	.error "gText_Rom_5CC39E must retain its original byte length"
	.endif
