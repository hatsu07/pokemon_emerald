	@ src/data/moves_info.h:6888 moves_info_line_6888
	.globl gText_Rom_2EB564
gText_Rom_2EB564: @ 0x082EB564
	.string "ばかぢから$"
	.if (. - gText_Rom_2EB564) > 0x6
	.error "gText_Rom_2EB564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB564) < 0x6
	.space 0x6 - (. - gText_Rom_2EB564)
	.endif
	.incbin "baserom.gba", 0x2eb56a, 0x2

	@ src/data/moves_info.h:6915 moves_info_line_6915
	.globl gText_Rom_2EB56C
gText_Rom_2EB56C: @ 0x082EB56C
	.string "マジックコート$"
	.if (. - gText_Rom_2EB56C) > 0x8
	.error "gText_Rom_2EB56C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB56C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB56C)
	.endif

	@ src/data/moves_info.h:6938 moves_info_line_6938
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB574
gText_Rom_2EB574: @ 0x082EB574
	.string "リサイクル$"
	.if (. - gText_Rom_2EB574) != 0x6
	.error "gText_Rom_2EB574 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB575
	.set gText_Rom_2EB575, gText_Rom_2EB574 + 0x1
	.incbin "baserom.gba", 0x2eb57a, 0x2

	@ src/data/moves_info.h:6962 moves_info_line_6962
	.globl gText_Rom_2EB57C
gText_Rom_2EB57C: @ 0x082EB57C
	.string "リベンジ$"
	.if (. - gText_Rom_2EB57C) > 0x5
	.error "gText_Rom_2EB57C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB57C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB57C)
	.endif
	.incbin "baserom.gba", 0x2eb581, 0x3

	@ src/data/moves_info.h:6983 moves_info_line_6983
	.globl gText_Rom_2EB584
gText_Rom_2EB584: @ 0x082EB584
	.string "かわらわり$"
	.if (. - gText_Rom_2EB584) > 0x6
	.error "gText_Rom_2EB584 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB584) < 0x6
	.space 0x6 - (. - gText_Rom_2EB584)
	.endif
	.incbin "baserom.gba", 0x2eb58a, 0x2

