	@ src/data/script_menu.h:565 script_menu_line_565
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD78
gText_Rom_5CAD78: @ 0x085CAD78
	.string "つうしんコンテスト{EOS}"
	.if (. - gText_Rom_5CAD78) != 0xa
	.error "gText_Rom_5CAD78 must retain its original byte length"
	.endif
