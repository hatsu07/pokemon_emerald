	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5AC0C1
gText_Rom_5AC0C1: @ 0x085AC0C1
	.string "まけた！$"
	.if (. - gText_Rom_5AC0C1) > 0x5
	.error "gText_Rom_5AC0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0C1) < 0x5
	.space 0x5 - (. - gText_Rom_5AC0C1)
	.endif
	.globl gUnknown_85AC0C6
gUnknown_85AC0C6: @ 0x085AC0C6
	.incbin "baserom.gba", 0x5ac0c6, 0x17
	.globl gUnknown_85AC0DD
gUnknown_85AC0DD: @ 0x085AC0DD

