	@ src/data/easy_chat/easy_chat_group_hobbies.h:190 easy_chat_group_hobbies_line_190
	.globl gText_Rom_577950
gText_Rom_577950: @ 0x08577950
	.string "つくり$"
	.if (. - gText_Rom_577950) > 0x4
	.error "gText_Rom_577950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577950) < 0x4
	.space 0x4 - (. - gText_Rom_577950)
	.endif
	@ Decoded text from ROM range: offset=0x577954, size=0x3
	.string "つり$"
