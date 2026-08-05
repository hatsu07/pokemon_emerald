	@ src/data/script_menu.h:4 script_menu_line_4
	.globl gText_Rom_5CA9FB
gText_Rom_5CA9FB: @ 0x085CA9FB
	.string "トウカ$"
	.if (. - gText_Rom_5CA9FB) > 0x4
	.error "gText_Rom_5CA9FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FB) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FB)
	.endif

	@ src/data/script_menu.h:5 script_menu_line_5
	.globl gText_Rom_5CA9FF
gText_Rom_5CA9FF: @ 0x085CA9FF
	.string "カイナ$"
	.if (. - gText_Rom_5CA9FF) > 0x4
	.error "gText_Rom_5CA9FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FF) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FF)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAA03, size=0x8
	.byte 0x70, 0x5C, 0x7B, 0xFF, 0x70, 0x65, 0x73, 0xFF

	@ src/data/script_menu.h:81 script_menu_line_81
	.globl gText_Rom_5CAA0B
gText_Rom_5CAA0B: @ 0x085CAA0B
	.string "ムロ$"
	.if (. - gText_Rom_5CAA0B) > 0x3
	.error "gText_Rom_5CAA0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA0B) < 0x3
	.space 0x3 - (. - gText_Rom_5CAA0B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAA0E, size=0x1C
	.byte 0x0B, 0x2E, 0x06, 0x00, 0x0D, 0x29, 0xFF, 0x0E, 0x12, 0x22, 0x02, 0x2D, 0x07, 0x08, 0xFF, 0x9F
	.byte 0x59, 0x73, 0x7E, 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x50, 0x13, 0xAC, 0xFF

	@ src/data/script_menu.h:21 script_menu_line_21
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA2A
gText_Rom_5CAA2A: @ 0x085CAA2A
	.string "コンテストの しゅるい$"
	.if (. - gText_Rom_5CAA2A) != 0xc
	.error "gText_Rom_5CAA2A must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA31
	.set gText_Rom_5CAA31, gText_Rom_5CAA2A + 0x7
	@ Replaced baserom.gba range: offset=0x5CAA36, size=0x14
	.byte 0x77, 0x7E, 0x58, 0x16, 0x00, 0x12, 0x02, 0x13, 0xFF, 0x0C, 0x2E, 0x0B, 0x02, 0x2E, 0x16, 0x00
	.byte 0x12, 0x02, 0x13, 0xFF

