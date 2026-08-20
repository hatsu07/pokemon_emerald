	@ src/data/script_menu.h:1328 script_menu_line_1328
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACE2
gText_Rom_5CACE2: @ 0x085CACE2
	.string "わざマシン{EOS}"
	.if (. - gText_Rom_5CACE2) != 0x6
	.error "gText_Rom_5CACE2 must retain its original byte length"
	.endif
