	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gStdString_Cool2
gStdString_Cool2: @ 0x085CACB4
	.string "かっこいい{EOS}"
	.if (. - gStdString_Cool2) > 0x6
	.error "gStdString_Cool2 may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Cool2) < 0x6
	.space 0x6 - (. - gStdString_Cool2)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gStdString_Beauty2
gStdString_Beauty2: @ 0x085CACBA
	.string "うつくしい{EOS}"
	.if (. - gStdString_Beauty2) > 0x6
	.error "gStdString_Beauty2 may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Beauty2) < 0x6
	.space 0x6 - (. - gStdString_Beauty2)
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
	.globl gStdString_Tough2
gStdString_Tough2: @ 0x085CACCC
	.string "たくましい{EOS}"
	.if (. - gStdString_Tough2) > 0x6
	.error "gStdString_Tough2 may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Tough2) < 0x6
	.space 0x6 - (. - gStdString_Tough2)
	.endif
