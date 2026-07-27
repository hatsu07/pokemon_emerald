	@ src/data/moves_info.h:6475 moves_info_line_6475
	.globl gText_Rom_2EB4E4
gText_Rom_2EB4E4: @ 0x082EB4E4
	.string "おだてる$"
	.if (. - gText_Rom_2EB4E4) > 0x5
	.error "gText_Rom_2EB4E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4E4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB4E4)
	.endif
	.incbin "baserom.gba", 0x2eb4e9, 0x3

	@ src/data/moves_info.h:6501 moves_info_line_6501
	.globl gText_Rom_2EB4EC
gText_Rom_2EB4EC: @ 0x082EB4EC
	.string "おにび$"
	.if (. - gText_Rom_2EB4EC) > 0x4
	.error "gText_Rom_2EB4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4EC) < 0x4
	.space 0x4 - (. - gText_Rom_2EB4EC)
	.endif
	.incbin "baserom.gba", 0x2eb4f0, 0x4

	@ src/data/moves_info.h:6524 moves_info_line_6524
	.globl gText_Rom_2EB4F4
gText_Rom_2EB4F4: @ 0x082EB4F4
	.string "おきみやげ$"
	.if (. - gText_Rom_2EB4F4) > 0x6
	.error "gText_Rom_2EB4F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4F4) < 0x6
	.space 0x6 - (. - gText_Rom_2EB4F4)
	.endif
	.incbin "baserom.gba", 0x2eb4fa, 0x2

	@ src/data/moves_info.h:6550 moves_info_line_6550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB4FC
gText_Rom_2EB4FC: @ 0x082EB4FC
	.string "からげんき$"
	.if (. - gText_Rom_2EB4FC) != 0x6
	.error "gText_Rom_2EB4FC must retain its original byte length"
	.endif
	.globl gText_Rom_2EB4FE
	.set gText_Rom_2EB4FE, gText_Rom_2EB4FC + 0x2
	.incbin "baserom.gba", 0x2eb502, 0x2

	@ src/data/moves_info.h:6571 moves_info_line_6571
	.globl gText_Rom_2EB504
gText_Rom_2EB504: @ 0x082EB504
	.string "きあいパンチ$"
	.if (. - gText_Rom_2EB504) > 0x7
	.error "gText_Rom_2EB504 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB504) < 0x7
	.space 0x7 - (. - gText_Rom_2EB504)
	.endif
	.incbin "baserom.gba", 0x2eb50b, 0x1

	@ src/data/moves_info.h:6600 moves_info_line_6600
	.globl gText_Rom_2EB50C
gText_Rom_2EB50C: @ 0x082EB50C
	.string "きつけ$"
	.if (. - gText_Rom_2EB50C) > 0x4
	.error "gText_Rom_2EB50C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB50C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB50C)
	.endif
	.incbin "baserom.gba", 0x2eb510, 0x4

	@ src/battle_z_move.c:101 sText_FollowMe (+1 aliases)
	.globl gText_Rom_2EB514
gText_Rom_2EB514: @ 0x082EB514
	.string "このゆびとまれ$"
	.if (. - gText_Rom_2EB514) > 0x8
	.error "gText_Rom_2EB514 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB514) < 0x8
	.space 0x8 - (. - gText_Rom_2EB514)
	.endif

	@ src/data/moves_info.h:6651 moves_info_line_6651
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB51C
gText_Rom_2EB51C: @ 0x082EB51C
	.string "しぜんのちから$"
	.if (. - gText_Rom_2EB51C) != 0x8
	.error "gText_Rom_2EB51C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB520
	.set gText_Rom_2EB520, gText_Rom_2EB51C + 0x4

