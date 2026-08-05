	@ src/battle_message.c:399 battle_message_line_399
	.globl gText_Rom_5AAB1D
gText_Rom_5AAB1D: @ 0x085AAB1D
	.string "あめが ふりやんだ!$"
	.if (. - gText_Rom_5AAB1D) > 0xb
	.error "gText_Rom_5AAB1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB1D) < 0xb
	.space 0xb - (. - gText_Rom_5AAB1D)
	.endif
