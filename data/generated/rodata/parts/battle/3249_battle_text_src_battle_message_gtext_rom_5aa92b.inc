	@ src/battle_message.c:384 battle_message_line_384
	.globl gText_Rom_5AA92B
gText_Rom_5AA92B: @ 0x085AA92B
	.string "そして……!\p$"
	.if (. - gText_Rom_5AA92B) > 0x8
	.error "gText_Rom_5AA92B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA92B) < 0x8
	.space 0x8 - (. - gText_Rom_5AA92B)
	.endif
