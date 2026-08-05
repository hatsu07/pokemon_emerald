	@ src/battle_message.c:180 sText_EnigmaBerry
	.globl gText_Rom_5AB288
gText_Rom_5AB288: @ 0x085AB288
	.string "ナゾのみ$"
	.if (. - gText_Rom_5AB288) > 0x5
	.error "gText_Rom_5AB288 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB288) < 0x5
	.space 0x5 - (. - gText_Rom_5AB288)
	.endif
