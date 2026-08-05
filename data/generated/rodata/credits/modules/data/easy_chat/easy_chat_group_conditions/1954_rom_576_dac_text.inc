	@ src/data/easy_chat/easy_chat_group_conditions.h:406 easy_chat_group_conditions_line_406
	.globl gText_Rom_576DAC
gText_Rom_576DAC: @ 0x08576DAC
	.string "らしい$"
	.if (. - gText_Rom_576DAC) > 0x4
	.error "gText_Rom_576DAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DAC) < 0x4
	.space 0x4 - (. - gText_Rom_576DAC)
	.endif
