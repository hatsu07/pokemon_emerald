	@ src/strings.c:1086 gText_GiftSentTo
	.globl gText_Rom_2C2A00
gText_Rom_2C2A00: @ 0x082C2A00
	.string "{STR_VAR_1}に おくりものを しました!$"
	.if (. - gText_Rom_2C2A00) > 0x11
	.error "gText_Rom_2C2A00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2A00) < 0x11
	.space 0x11 - (. - gText_Rom_2C2A00)
	.endif
