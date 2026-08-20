	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5AC0C1
gText_Rom_5AC0C1: @ 0x085AC0C1
	.string "まけた！{EOS}"
	.if (. - gText_Rom_5AC0C1) > 0x5
	.error "gText_Rom_5AC0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0C1) < 0x5
	.space 0x5 - (. - gText_Rom_5AC0C1)
	.endif
