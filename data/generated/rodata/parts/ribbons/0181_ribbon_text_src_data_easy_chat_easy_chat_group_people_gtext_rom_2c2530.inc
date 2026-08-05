	@ src/data/easy_chat/easy_chat_group_people.h:310 easy_chat_group_people_line_310 (+2 aliases)
	.globl gText_Rom_2C2530
gText_Rom_2C2530: @ 0x082C2530
	.string "ともだち$"
	.if (. - gText_Rom_2C2530) > 0x5
	.error "gText_Rom_2C2530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2530) < 0x5
	.space 0x5 - (. - gText_Rom_2C2530)
	.endif
	.space 0x3, 0x00

