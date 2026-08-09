	@ src/data/easy_chat/easy_chat_group_actions.h:448 easy_chat_group_actions_line_448
	.globl gText_Rom_5EC8B5
gText_Rom_5EC8B5: @ 0x085EC8B5
	.string "られない$"
	.if (. - gText_Rom_5EC8B5) > 0x5
	.error "gText_Rom_5EC8B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EC8B5) < 0x5
	.space 0x5 - (. - gText_Rom_5EC8B5)
	.endif
	@ analyzed canonical ROM range 0x085EC8BA-0x085EC8EF
sAnalyzedData_085EC8BA: @ 0x085EC8BA
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2712, 0x2D27, 0xA300
	.2byte 0xA6AE, 0x0206, 0x2A00, 0x402E, 0x4408, 0x1AFE, 0x0C50, 0x0C34
	.2byte 0x0013, 0x0713, 0x002D
