	@ src/battle_message.c:419 battle_message_line_419
	.globl gText_Rom_5AB115
gText_Rom_5AB115: @ 0x085AB115
	.string "トレーナーに ボールを はじかれた!$"
	.if (. - gText_Rom_5AB115) > 0x13
	.error "gText_Rom_5AB115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB115) < 0x13
	.space 0x13 - (. - gText_Rom_5AB115)
	.endif
