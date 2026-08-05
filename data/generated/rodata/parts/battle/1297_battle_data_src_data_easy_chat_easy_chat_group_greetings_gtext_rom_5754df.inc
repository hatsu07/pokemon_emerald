	@ src/data/easy_chat/easy_chat_group_greetings.h:154 easy_chat_group_greetings_line_154
	.globl gText_Rom_5754DF
gText_Rom_5754DF: @ 0x085754DF
	.string "どうも$"
	.if (. - gText_Rom_5754DF) > 0x4
	.error "gText_Rom_5754DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DF) < 0x4
	.space 0x4 - (. - gText_Rom_5754DF)
	.endif
	@ Decoded text from ROM range: offset=0x5754E3, size=0x3
	.string "なあ$"
