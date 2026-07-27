	@ src/data/moves_info.h:530 moves_info_line_530
	.globl gText_Rom_5E8C8F
gText_Rom_5E8C8F: @ 0x085E8C8F
	.string "たたきつける$"
	.if (. - gText_Rom_5E8C8F) > 0x7
	.error "gText_Rom_5E8C8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8C8F) < 0x7
	.space 0x7 - (. - gText_Rom_5E8C8F)
	.endif
	.incbin "baserom.gba", 0x5e8c96, 0x14e

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E8DE4
gText_Rom_5E8DE4: @ 0x085E8DE4
	.string "しまう$"
	.if (. - gText_Rom_5E8DE4) > 0x4
	.error "gText_Rom_5E8DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8DE4) < 0x4
	.space 0x4 - (. - gText_Rom_5E8DE4)
	.endif
	.incbin "baserom.gba", 0x5e8de8, 0x2a

