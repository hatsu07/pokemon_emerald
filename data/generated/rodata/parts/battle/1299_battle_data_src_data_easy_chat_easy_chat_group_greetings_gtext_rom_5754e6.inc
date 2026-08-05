	@ src/data/easy_chat/easy_chat_group_greetings.h:166 easy_chat_group_greetings_line_166
	.globl gText_Rom_5754E6
gText_Rom_5754E6: @ 0x085754E6
	.string "なんじゃ$"
	.if (. - gText_Rom_5754E6) > 0x5
	.error "gText_Rom_5754E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754E6) < 0x5
	.space 0x5 - (. - gText_Rom_5754E6)
	.endif
	@ Decoded text from ROM range: offset=0x5754EB, size=0x3
	.string "ねえ$"
