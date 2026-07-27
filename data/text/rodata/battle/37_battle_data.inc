	@ src/battle_debug.c:409 battle_debug_line_409 (+1 aliases)
	.globl gText_Rom_2EB05C
gText_Rom_2EB05C: @ 0x082EB05C
	.string "リフレクター$"
	.if (. - gText_Rom_2EB05C) > 0x7
	.error "gText_Rom_2EB05C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB05C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB05C)
	.endif
	.incbin "baserom.gba", 0x2eb063, 0x1

	@ src/battle_debug.c:369 battle_debug_line_369 (+1 aliases)
	.globl gText_Rom_2EB064
gText_Rom_2EB064: @ 0x082EB064
	.string "きあいだめ$"
	.if (. - gText_Rom_2EB064) > 0x6
	.error "gText_Rom_2EB064 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB064) < 0x6
	.space 0x6 - (. - gText_Rom_2EB064)
	.endif
	.incbin "baserom.gba", 0x2eb06a, 0x2

	@ src/data/easy_chat/easy_chat_group_actions.h:130 easy_chat_group_actions_line_130 (+1 aliases)
	.globl gText_Rom_2EB06C
gText_Rom_2EB06C: @ 0x082EB06C
	.string "がまん$"
	.if (. - gText_Rom_2EB06C) > 0x4
	.error "gText_Rom_2EB06C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB06C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB06C)
	.endif
	.incbin "baserom.gba", 0x2eb070, 0x4

