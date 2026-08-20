	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD4FC
gText_Rom_5DD4FC: @ 0x085DD4FC
	.string "オープンレベル{EOS}"
	.if (. - gText_Rom_5DD4FC) != 0x8
	.error "gText_Rom_5DD4FC must retain its original byte length"
	.endif
