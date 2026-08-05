	@ src/battle_message.c:415 battle_message_line_415
	.globl gText_Rom_5AAC53
gText_Rom_5AAC53: @ 0x085AAC53
	.string "わざの のこりポイントが ない!\p$"
	.if (. - gText_Rom_5AAC53) > 0x12
	.error "gText_Rom_5AAC53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC53) < 0x12
	.space 0x12 - (. - gText_Rom_5AAC53)
	.endif
