	@ src/data/moves_info.h:7190 moves_info_line_7190
	.globl gText_Rom_2EB5CC
gText_Rom_2EB5CC: @ 0x082EB5CC
	.string "よこどり$"
	.if (. - gText_Rom_2EB5CC) > 0x5
	.error "gText_Rom_2EB5CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5CC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5CC)
	.endif
	.incbin "baserom.gba", 0x2eb5d1, 0x3

	@ src/data/moves_info.h:7218 moves_info_line_7218
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB5D4
gText_Rom_2EB5D4: @ 0x082EB5D4
	.string "ひみつのちから$"
	.if (. - gText_Rom_2EB5D4) != 0x8
	.error "gText_Rom_2EB5D4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB5D8
	.set gText_Rom_2EB5D8, gText_Rom_2EB5D4 + 0x4

	@ src/data/moves_info.h:7242 moves_info_line_7242
	.globl gText_Rom_2EB5DC
gText_Rom_2EB5DC: @ 0x082EB5DC
	.string "ダイビング$"
	.if (. - gText_Rom_2EB5DC) > 0x6
	.error "gText_Rom_2EB5DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB5DC)
	.endif
	.incbin "baserom.gba", 0x2eb5e2, 0x2

	@ src/data/moves_info.h:7268 moves_info_line_7268
	.globl gText_Rom_2EB5E4
gText_Rom_2EB5E4: @ 0x082EB5E4
	.string "つっぱり$"
	.if (. - gText_Rom_2EB5E4) > 0x5
	.error "gText_Rom_2EB5E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5E4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5E4)
	.endif
	.incbin "baserom.gba", 0x2eb5e9, 0x3

	@ src/data/moves_info.h:7289 moves_info_line_7289
	.globl gText_Rom_2EB5EC
gText_Rom_2EB5EC: @ 0x082EB5EC
	.string "ほごしょく$"
	.if (. - gText_Rom_2EB5EC) > 0x6
	.error "gText_Rom_2EB5EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5EC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB5EC)
	.endif
	.incbin "baserom.gba", 0x2eb5f2, 0x2

	@ src/data/moves_info.h:7313 moves_info_line_7313
	.globl gText_Rom_2EB5F4
gText_Rom_2EB5F4: @ 0x082EB5F4
	.string "ほたるび$"
	.if (. - gText_Rom_2EB5F4) > 0x5
	.error "gText_Rom_2EB5F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5F4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5F4)
	.endif
	.incbin "baserom.gba", 0x2eb5f9, 0x3

	@ src/data/moves_info.h:7341 moves_info_line_7341
	.globl gText_Rom_2EB5FC
gText_Rom_2EB5FC: @ 0x082EB5FC
	.string "ラスターパージ$"
	.if (. - gText_Rom_2EB5FC) > 0x8
	.error "gText_Rom_2EB5FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5FC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB5FC)
	.endif

	@ src/data/moves_info.h:7366 moves_info_line_7366
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB604
gText_Rom_2EB604: @ 0x082EB604
	.string "ミストボール$"
	.if (. - gText_Rom_2EB604) != 0x7
	.error "gText_Rom_2EB604 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB607
	.set gText_Rom_2EB607, gText_Rom_2EB604 + 0x3
	.incbin "baserom.gba", 0x2eb60b, 0x1

	@ src/data/moves_info.h:7392 moves_info_line_7392
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB60C
gText_Rom_2EB60C: @ 0x082EB60C
	.string "フェザーダンス$"
	.if (. - gText_Rom_2EB60C) != 0x8
	.error "gText_Rom_2EB60C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB610
	.set gText_Rom_2EB610, gText_Rom_2EB60C + 0x4

	@ src/data/moves_info.h:7419 moves_info_line_7419
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB614
gText_Rom_2EB614: @ 0x082EB614
	.string "フラフラダンス$"
	.if (. - gText_Rom_2EB614) != 0x8
	.error "gText_Rom_2EB614 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB618
	.set gText_Rom_2EB618, gText_Rom_2EB614 + 0x4

	@ src/data/moves_info.h:7442 moves_info_line_7442
	.globl gText_Rom_2EB61C
gText_Rom_2EB61C: @ 0x082EB61C
	.string "ブレイズキック$"
	.if (. - gText_Rom_2EB61C) > 0x8
	.error "gText_Rom_2EB61C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB61C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB61C)
	.endif

