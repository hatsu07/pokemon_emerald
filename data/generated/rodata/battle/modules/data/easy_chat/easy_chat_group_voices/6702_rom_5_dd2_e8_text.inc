	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_5DD2E8
gText_Rom_5DD2E8: @ 0x085DD2E8
	.string "ーーー{EOS}"
	.if (. - gText_Rom_5DD2E8) > 0x4
	.error "gText_Rom_5DD2E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD2E8) < 0x4
	.space 0x4 - (. - gText_Rom_5DD2E8)
	.endif
