	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_5CC31F
gText_Rom_5CC31F: @ 0x085CC31F
	.string "なまえ{EOS}"
	.if (. - gText_Rom_5CC31F) > 0x4
	.error "gText_Rom_5CC31F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC31F) < 0x4
	.space 0x4 - (. - gText_Rom_5CC31F)
	.endif
	.globl gText_Rom_5CC323
gText_Rom_5CC323: @ 0x085CC323
	@ Decoded text from ROM range: offset=0x5CC323, size=0x6
	.string "IDNo,{EOS}"

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:22 easy_chat_group_lifestyle_line_22 (+1 aliases)
	.globl gText_Rom_5CC329
gText_Rom_5CC329: @ 0x085CC329
	.string "おこづかい{EOS}"
	.if (. - gText_Rom_5CC329) > 0x6
	.error "gText_Rom_5CC329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC329) < 0x6
	.space 0x6 - (. - gText_Rom_5CC329)
	.endif
