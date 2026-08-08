	@ src/strings.c:593 gText_QuitGivingInfo
	.globl gText_Rom_5CBB63
gText_Rom_5CBB63: @ 0x085CBB63
	.string "ことばを おしえるのを やめますか?$"
	.if (. - gText_Rom_5CBB63) > 0x13
	.error "gText_Rom_5CBB63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB63) < 0x13
	.space 0x13 - (. - gText_Rom_5CBB63)
	.endif
