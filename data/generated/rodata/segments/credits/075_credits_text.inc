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
	@ Decoded text from ROM range: offset=0x30F780, size=0xE
	.string "しょうしょうおまちください$"
	.globl gUnknown_830F78E
gUnknown_830F78E: @ 0x0830F78E

