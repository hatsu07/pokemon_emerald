	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_5C9406
gText_Rom_5C9406: @ 0x085C9406
	.string "ーーー{EOS}"
	.if (. - gText_Rom_5C9406) > 0x4
	.error "gText_Rom_5C9406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9406) < 0x4
	.space 0x4 - (. - gText_Rom_5C9406)
	.endif
