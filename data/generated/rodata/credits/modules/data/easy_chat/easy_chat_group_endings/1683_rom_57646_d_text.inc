	@ src/data/easy_chat/easy_chat_group_endings.h:298 easy_chat_group_endings_line_298
	.globl gText_Rom_57646D
gText_Rom_57646D: @ 0x0857646D
	.string "なんてね$"
	.if (. - gText_Rom_57646D) > 0x5
	.error "gText_Rom_57646D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57646D) < 0x5
	.space 0x5 - (. - gText_Rom_57646D)
	.endif
	@ Replaced baserom.gba range: offset=0x576472, size=0xA
	.byte 0x18, 0xFF, 0x18, 0xAE, 0xFF, 0x19, 0xFF, 0x19, 0xAC, 0xFF
