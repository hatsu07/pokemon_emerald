	@ src/data/moves_info.h:4883 moves_info_line_4883
	.globl gText_Rom_2EB2E4
gText_Rom_2EB2E4: @ 0x082EB2E4
	.string "こごえるかぜ$"
	.if (. - gText_Rom_2EB2E4) > 0x7
	.error "gText_Rom_2EB2E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2E4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2E4)
	.endif
	.incbin "baserom.gba", 0x2eb2eb, 0x1

	@ src/data/moves_info.h:4909 moves_info_line_4909
	.globl gText_Rom_2EB2EC
gText_Rom_2EB2EC: @ 0x082EB2EC
	.string "みきり$"
	.if (. - gText_Rom_2EB2EC) > 0x4
	.error "gText_Rom_2EB2EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2EC) < 0x4
	.space 0x4 - (. - gText_Rom_2EB2EC)
	.endif
	.incbin "baserom.gba", 0x2eb2f0, 0x4

	@ src/data/moves_info.h:4942 moves_info_line_4942
	.globl gText_Rom_2EB2F4
gText_Rom_2EB2F4: @ 0x082EB2F4
	.string "ボーンラッシュ$"
	.if (. - gText_Rom_2EB2F4) > 0x8
	.error "gText_Rom_2EB2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2F4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB2F4)
	.endif

