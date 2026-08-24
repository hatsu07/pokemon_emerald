	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gText_Rom_5CACB4
gText_Rom_5CACB4: @ 0x085CACB4
	.string "かっこいい{EOS}"
	.if (. - gText_Rom_5CACB4) > 0x6
	.error "gText_Rom_5CACB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACB4) < 0x6
	.space 0x6 - (. - gText_Rom_5CACB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_5CACBA
gText_Rom_5CACBA: @ 0x085CACBA
	.string "うつくしい{EOS}"
	.if (. - gText_Rom_5CACBA) > 0x6
	.error "gText_Rom_5CACBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACBA) < 0x6
	.space 0x6 - (. - gText_Rom_5CACBA)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:148 easy_chat_group_status_line_148
	.globl gText_Rom_5CACC0
gText_Rom_5CACC0: @ 0x085CACC0
	.string "かわいい{EOS}"
	.if (. - gText_Rom_5CACC0) > 0x5
	.error "gText_Rom_5CACC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACC0)
	.endif
	@ Decoded text from ROM range: offset=0x5CACC5, size=0x7
	.string "かしこそうな{EOS}"

	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_5CACCC
gText_Rom_5CACCC: @ 0x085CACCC
	.string "たくましい{EOS}"
	.if (. - gText_Rom_5CACCC) > 0x6
	.error "gText_Rom_5CACCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACCC) < 0x6
	.space 0x6 - (. - gText_Rom_5CACCC)
	.endif
