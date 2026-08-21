	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_574A5E
gText_Rom_574A5E: @ 0x08574A5E
	.string "ノーマル{EOS}"
	.if (. - gText_Rom_574A5E) > 0x5
	.error "gText_Rom_574A5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A5E) < 0x5
	.space 0x5 - (. - gText_Rom_574A5E)
	.endif
