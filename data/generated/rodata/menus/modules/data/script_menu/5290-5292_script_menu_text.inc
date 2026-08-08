	@ src/data/script_menu.h:480 gText_Colosseum
	.globl gText_Rom_5CAE53
gText_Rom_5CAE53: @ 0x085CAE53
	.string "コロシアム$"
	.if (. - gText_Rom_5CAE53) > 0x6
	.error "gText_Rom_5CAE53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE53) < 0x6
	.space 0x6 - (. - gText_Rom_5CAE53)
	.endif
	@ Decoded text from ROM range: offset=0x5CAE59, size=0x9
	.string "レコードコーナー$"

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAE62
gText_Rom_5CAE62: @ 0x085CAE62
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_5CAE62) != 0x9
	.error "gText_Rom_5CAE62 must retain its original byte length"
	.endif
