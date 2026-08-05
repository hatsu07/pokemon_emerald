	@ src/data/easy_chat/easy_chat_group_conditions.h:124 easy_chat_group_conditions_line_124
	.globl gText_Rom_576CDB
gText_Rom_576CDB: @ 0x08576CDB
	.string "おくれ$"
	.if (. - gText_Rom_576CDB) > 0x4
	.error "gText_Rom_576CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CDB) < 0x4
	.space 0x4 - (. - gText_Rom_576CDB)
	.endif
