	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_30F77C
gText_Rom_30F77C: @ 0x0830F77C
	.string "します$"
	.if (. - gText_Rom_30F77C) > 0x4
	.error "gText_Rom_30F77C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F77C) < 0x4
	.space 0x4 - (. - gText_Rom_30F77C)
	.endif
	@ Replaced baserom.gba range: offset=0x30F780, size=0xE
	.byte 0x0C, 0x36, 0x03, 0x0C, 0x36, 0x03, 0x05, 0x1F, 0x11, 0x08, 0x41, 0x0B, 0x02, 0xFF
	.globl gUnknown_830F78E
gUnknown_830F78E: @ 0x0830F78E

