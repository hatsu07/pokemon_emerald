	@ src/data/moves_info.h:504 moves_info_line_504
	.globl gText_Rom_5E87C3
gText_Rom_5E87C3: @ 0x085E87C3
	.string "しめつける$"
	.if (. - gText_Rom_5E87C3) > 0x6
	.error "gText_Rom_5E87C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E87C3) < 0x6
	.space 0x6 - (. - gText_Rom_5E87C3)
	.endif
	.incbin "baserom.gba", 0x5e87c9, 0x6c

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_5E8835
gText_Rom_5E8835: @ 0x085E8835
	.string "しまう$"
	.if (. - gText_Rom_5E8835) > 0x4
	.error "gText_Rom_5E8835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8835) < 0x4
	.space 0x4 - (. - gText_Rom_5E8835)
	.endif
	.incbin "baserom.gba", 0x5e8839, 0xd8

