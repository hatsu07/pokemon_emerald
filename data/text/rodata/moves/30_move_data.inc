	@ src/data/moves_info.h:2448 moves_info_line_2448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAFE4
gText_Rom_2EAFE4: @ 0x082EAFE4
	.string "テレポート$"
	.if (. - gText_Rom_2EAFE4) != 0x6
	.error "gText_Rom_2EAFE4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAFE5
	.set gText_Rom_2EAFE5, gText_Rom_2EAFE4 + 0x1
	.incbin "baserom.gba", 0x2eafea, 0x2

	@ src/data/moves_info.h:2470 moves_info_line_2470
	.globl gText_Rom_2EAFEC
gText_Rom_2EAFEC: @ 0x082EAFEC
	.string "ナイトヘッド$"
	.if (. - gText_Rom_2EAFEC) > 0x7
	.error "gText_Rom_2EAFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFEC) < 0x7
	.space 0x7 - (. - gText_Rom_2EAFEC)
	.endif
	.incbin "baserom.gba", 0x2eaff3, 0x1

	@ src/data/moves_info.h:2490 moves_info_line_2490
	.globl gText_Rom_2EAFF4
gText_Rom_2EAFF4: @ 0x082EAFF4
	.string "ものまね$"
	.if (. - gText_Rom_2EAFF4) > 0x5
	.error "gText_Rom_2EAFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAFF4)
	.endif
	.incbin "baserom.gba", 0x2eaff9, 0x3

	@ src/data/moves_info.h:2519 moves_info_line_2519
	.globl gText_Rom_2EAFFC
gText_Rom_2EAFFC: @ 0x082EAFFC
	.string "いやなおと$"
	.if (. - gText_Rom_2EAFFC) > 0x6
	.error "gText_Rom_2EAFFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EAFFC)
	.endif
	.incbin "baserom.gba", 0x2eb002, 0x2

	@ src/data/moves_info.h:2547 moves_info_line_2547
	.globl gText_Rom_2EB004
gText_Rom_2EB004: @ 0x082EB004
	.string "かげぶんしん$"
	.if (. - gText_Rom_2EB004) > 0x7
	.error "gText_Rom_2EB004 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB004) < 0x7
	.space 0x7 - (. - gText_Rom_2EB004)
	.endif
	.incbin "baserom.gba", 0x2eb00b, 0x1

	@ src/data/moves_info.h:2575 moves_info_line_2575
	.globl gText_Rom_2EB00C
gText_Rom_2EB00C: @ 0x082EB00C
	.string "じこさいせい$"
	.if (. - gText_Rom_2EB00C) > 0x7
	.error "gText_Rom_2EB00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB00C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB00C)
	.endif
	.incbin "baserom.gba", 0x2eb013, 0x1

	@ src/data/moves_info.h:2606 moves_info_line_2606
	.globl gText_Rom_2EB014
gText_Rom_2EB014: @ 0x082EB014
	.string "かたくなる$"
	.if (. - gText_Rom_2EB014) > 0x6
	.error "gText_Rom_2EB014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB014) < 0x6
	.space 0x6 - (. - gText_Rom_2EB014)
	.endif
	.incbin "baserom.gba", 0x2eb01a, 0x2

