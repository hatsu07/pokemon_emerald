	@ src/data/moves_info.h:1741 moves_info_line_1741
	.globl gText_Rom_5E9012
gText_Rom_5E9012: @ 0x085E9012
	.string "すいとる$"
	.if (. - gText_Rom_5E9012) > 0x5
	.error "gText_Rom_5E9012 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9012) < 0x5
	.space 0x5 - (. - gText_Rom_5E9012)
	.endif
	.incbin "baserom.gba", 0x5e9017, 0x2e

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5E9045
gText_Rom_5E9045: @ 0x085E9045
	.string "あげる$"
	.if (. - gText_Rom_5E9045) > 0x4
	.error "gText_Rom_5E9045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E9045) < 0x4
	.space 0x4 - (. - gText_Rom_5E9045)
	.endif
	.incbin "baserom.gba", 0x5e9049, 0x72

