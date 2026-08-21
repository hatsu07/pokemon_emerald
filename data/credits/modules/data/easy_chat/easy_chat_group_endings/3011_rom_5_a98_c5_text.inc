	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A98C5
gText_Rom_5A98C5: @ 0x085A98C5
	.string "ている{EOS}"
	.if (. - gText_Rom_5A98C5) > 0x4
	.error "gText_Rom_5A98C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A98C5) < 0x4
	.space 0x4 - (. - gText_Rom_5A98C5)
	.endif
	@ analyzed canonical ROM range 0x085A98C9-0x085A98D6
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x11, 0x1A, 0xFE, 0x23, 0x03, 0x45, 0x08, 0x2D, 0x01, 0x47, 0x10, 0xAB, 0xFF
