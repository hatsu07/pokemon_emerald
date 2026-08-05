	@ src/strings.c:990 gText_MixingRecords
	.globl gText_Rom_566CA4
gText_Rom_566CA4: @ 0x08566CA4
	.string "レコードを まぜています$"
	.if (. - gText_Rom_566CA4) > 0xd
	.error "gText_Rom_566CA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566CA4) < 0xd
	.space 0xd - (. - gText_Rom_566CA4)
	.endif
