	@ src/battle_message.c:497 battle_message_line_497
	.globl gText_Rom_5AB26A
gText_Rom_5AB26A: @ 0x085AB26A
	.string "ボックスが いっぱいで\nこれいじょう つかまえられない!\p$"
	.if (. - gText_Rom_5AB26A) > 0x1e
	.error "gText_Rom_5AB26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB26A) < 0x1e
	.space 0x1e - (. - gText_Rom_5AB26A)
	.endif
