	@ src/data/moves_info.h:2662 moves_info_line_2662
	.globl gText_Rom_2EB024
gText_Rom_2EB024: @ 0x082EB024
	.string "えんまく$"
	.if (. - gText_Rom_2EB024) > 0x5
	.error "gText_Rom_2EB024 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB024) < 0x5
	.space 0x5 - (. - gText_Rom_2EB024)
	.endif
	.incbin "baserom.gba", 0x2eb029, 0x3

	@ src/data/moves_info.h:2688 moves_info_line_2688
	.globl gText_Rom_2EB02C
gText_Rom_2EB02C: @ 0x082EB02C
	.string "あやしいひかり$"
	.if (. - gText_Rom_2EB02C) > 0x8
	.error "gText_Rom_2EB02C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB02C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB02C)
	.endif

	@ src/data/moves_info.h:2710 moves_info_line_2710
	.globl gText_Rom_2EB034
gText_Rom_2EB034: @ 0x082EB034
	.string "からにこもる$"
	.if (. - gText_Rom_2EB034) > 0x7
	.error "gText_Rom_2EB034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB034) < 0x7
	.space 0x7 - (. - gText_Rom_2EB034)
	.endif
	.incbin "baserom.gba", 0x2eb03b, 0x1

