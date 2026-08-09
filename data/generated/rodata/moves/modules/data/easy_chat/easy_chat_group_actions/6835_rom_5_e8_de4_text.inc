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
	@ analyzed canonical ROM range 0x085E8DE8-0x085E8E11
sAnalyzedData_085E8DE8: @ 0x085E8DE8
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x1108, 0x0C46, 0x4515, 0x002D, 0x0612, 0x1350
	.2byte 0x13FE, 0x2D07, 0x1200, 0x0212, 0x0013
