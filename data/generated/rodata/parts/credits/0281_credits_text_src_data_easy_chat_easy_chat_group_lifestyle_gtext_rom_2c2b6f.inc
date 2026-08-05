	@ src/data/easy_chat/easy_chat_group_lifestyle.h:154 easy_chat_group_lifestyle_line_154
	.globl gText_Rom_2C2B6F
gText_Rom_2C2B6F: @ 0x082C2B6F
	.string "テスト$"
	.if (. - gText_Rom_2C2B6F) > 0x4
	.error "gText_Rom_2C2B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2B6F) < 0x4
	.space 0x4 - (. - gText_Rom_2C2B6F)
	.endif
	@ Decoded text from ROM range: offset=0x2C2B73, size=0x9
	.string "むげんのチケット$"
