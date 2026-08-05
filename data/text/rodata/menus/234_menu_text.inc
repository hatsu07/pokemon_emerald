	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFC0
gText_Rom_5CAFC0: @ 0x085CAFC0
	.string "バトルバッグ$"
	.if (. - gText_Rom_5CAFC0) != 0x7
	.error "gText_Rom_5CAFC0 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFC3
	.set gText_Rom_5CAFC3, gText_Rom_5CAFC0 + 0x3
	@ Replaced baserom.gba range: offset=0x5CAFC7, size=0x5
	.byte 0x9F, 0x59, 0x65, 0x97, 0x14

