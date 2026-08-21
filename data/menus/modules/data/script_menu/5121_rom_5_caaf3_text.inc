	@ src/data/script_menu.h:502 script_menu_line_502 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAF3
gText_Rom_5CAAF3: @ 0x085CAAF3
	.string "マルチバトル{EOS}"
	.if (. - gText_Rom_5CAAF3) != 0x7
	.error "gText_Rom_5CAAF3 must retain its original byte length"
	.endif
