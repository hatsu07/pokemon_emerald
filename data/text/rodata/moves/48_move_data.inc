	@ src/data/moves_info.h:5337 moves_info_line_5337
	.globl gText_Rom_2EB374
gText_Rom_2EB374: @ 0x082EB374
	.string "ねごと$"
	.if (. - gText_Rom_2EB374) > 0x4
	.error "gText_Rom_2EB374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB374) < 0x4
	.space 0x4 - (. - gText_Rom_2EB374)
	.endif
	.incbin "baserom.gba", 0x2eb378, 0x4

	@ src/data/moves_info.h:5367 moves_info_line_5367
	.globl gText_Rom_2EB37C
gText_Rom_2EB37C: @ 0x082EB37C
	.string "いやしのすず$"
	.if (. - gText_Rom_2EB37C) > 0x7
	.error "gText_Rom_2EB37C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB37C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB37C)
	.endif
	.incbin "baserom.gba", 0x2eb383, 0x1

	@ src/data/moves_info.h:5393 moves_info_line_5393
	.globl gText_Rom_2EB384
gText_Rom_2EB384: @ 0x082EB384
	.string "おんがえし$"
	.if (. - gText_Rom_2EB384) > 0x6
	.error "gText_Rom_2EB384 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB384) < 0x6
	.space 0x6 - (. - gText_Rom_2EB384)
	.endif
	.incbin "baserom.gba", 0x2eb38a, 0x2

	@ src/data/moves_info.h:5414 moves_info_line_5414
	.globl gText_Rom_2EB38C
gText_Rom_2EB38C: @ 0x082EB38C
	.string "プレゼント$"
	.if (. - gText_Rom_2EB38C) > 0x6
	.error "gText_Rom_2EB38C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB38C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB38C)
	.endif
	.incbin "baserom.gba", 0x2eb392, 0x2

	@ src/data/moves_info.h:5435 moves_info_line_5435
	.globl gText_Rom_2EB394
gText_Rom_2EB394: @ 0x082EB394
	.string "やつあたり$"
	.if (. - gText_Rom_2EB394) > 0x6
	.error "gText_Rom_2EB394 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB394) < 0x6
	.space 0x6 - (. - gText_Rom_2EB394)
	.endif
	.incbin "baserom.gba", 0x2eb39a, 0x2

