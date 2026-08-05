	@ src/battle_message.c:177 sText_Someones
	.globl gText_Rom_5AB225
gText_Rom_5AB225: @ 0x085AB225
	.string "だれかの$"
	.if (. - gText_Rom_5AB225) > 0x5
	.error "gText_Rom_5AB225 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB225) < 0x5
	.space 0x5 - (. - gText_Rom_5AB225)
	.endif
