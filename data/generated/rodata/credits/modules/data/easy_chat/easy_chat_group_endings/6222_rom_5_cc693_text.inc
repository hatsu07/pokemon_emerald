	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_5CC693
gText_Rom_5CC693: @ 0x085CC693
	.string "ません{EOS}"
	.if (. - gText_Rom_5CC693) > 0x4
	.error "gText_Rom_5CC693 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC693) < 0x4
	.space 0x4 - (. - gText_Rom_5CC693)
	.endif
