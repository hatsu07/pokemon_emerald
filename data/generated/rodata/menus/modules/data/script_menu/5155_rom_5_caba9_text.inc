	@ src/data/script_menu.h:262 script_menu_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CABA9
gText_Rom_5CABA9: @ 0x085CABA9
	.string "ガラスのつくえ$"
	.if (. - gText_Rom_5CABA9) != 0x8
	.error "gText_Rom_5CABA9 must retain its original byte length"
	.endif
