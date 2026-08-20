	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF64
gText_Rom_5CAF64: @ 0x085CAF64
	.string "オープンレベル{EOS}"
	.if (. - gText_Rom_5CAF64) != 0x8
	.error "gText_Rom_5CAF64 must retain its original byte length"
	.endif
