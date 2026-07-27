	@ src/data/moves_info.h:7031 moves_info_line_7031
	.globl gText_Rom_2EB594
gText_Rom_2EB594: @ 0x082EB594
	.string "はたきおとす$"
	.if (. - gText_Rom_2EB594) > 0x7
	.error "gText_Rom_2EB594 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB594) < 0x7
	.space 0x7 - (. - gText_Rom_2EB594)
	.endif
	.incbin "baserom.gba", 0x2eb59b, 0x1

	@ src/data/moves_info.h:7052 moves_info_line_7052
	.globl gText_Rom_2EB59C
gText_Rom_2EB59C: @ 0x082EB59C
	.string "がむしゃら$"
	.if (. - gText_Rom_2EB59C) > 0x6
	.error "gText_Rom_2EB59C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB59C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB59C)
	.endif
	.incbin "baserom.gba", 0x2eb5a2, 0x2

	@ src/data/moves_info.h:7074 moves_info_line_7074
	.globl gText_Rom_2EB5A4
gText_Rom_2EB5A4: @ 0x082EB5A4
	.string "ふんか$"
	.if (. - gText_Rom_2EB5A4) > 0x4
	.error "gText_Rom_2EB5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5A4) < 0x4
	.space 0x4 - (. - gText_Rom_2EB5A4)
	.endif
	.incbin "baserom.gba", 0x2eb5a8, 0x4

	@ src/data/moves_info.h:7094 moves_info_line_7094
	.globl gText_Rom_2EB5AC
gText_Rom_2EB5AC: @ 0x082EB5AC
	.string "スキルスワップ$"
	.if (. - gText_Rom_2EB5AC) > 0x8
	.error "gText_Rom_2EB5AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5AC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB5AC)
	.endif

