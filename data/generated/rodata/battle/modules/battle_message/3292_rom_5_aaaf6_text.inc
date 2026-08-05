	@ src/battle_message.c:396 battle_message_line_396
	.globl gText_Rom_5AAAF6
gText_Rom_5AAAF6: @ 0x085AAAF6
	.string "おおあめに なった!$"
	.if (. - gText_Rom_5AAAF6) > 0xb
	.error "gText_Rom_5AAAF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAAF6) < 0xb
	.space 0xb - (. - gText_Rom_5AAAF6)
	.endif
