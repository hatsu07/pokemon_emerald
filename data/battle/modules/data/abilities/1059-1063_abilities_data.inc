	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gEasyChatWord_Evolution_Copy_Battle
gEasyChatWord_Evolution_Copy_Battle: @ 0x08574A5E
	.string "ノーマル{EOS}"
	.if (. - gEasyChatWord_Evolution_Copy_Battle) > 0x5
	.error "gEasyChatWord_Evolution_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Evolution_Copy_Battle) < 0x5
	.space 0x5 - (. - gEasyChatWord_Evolution_Copy_Battle)
	.endif
	@ src/data/easy_chat/easy_chat_group_status.h:424 easy_chat_group_status_line_424 (+1 aliases)
	.globl gText_Rom_574A63
gText_Rom_574A63: @ 0x08574A63
	.string "はがね{EOS}"
	.if (. - gText_Rom_574A63) > 0x4
	.error "gText_Rom_574A63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A63) < 0x4
	.space 0x4 - (. - gText_Rom_574A63)
	.endif
	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_574A67
gText_Rom_574A67: @ 0x08574A67
	.string "はっこう{EOS}"
	.if (. - gText_Rom_574A67) > 0x5
	.error "gText_Rom_574A67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A67) < 0x5
	.space 0x5 - (. - gText_Rom_574A67)
	.endif

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_574A6C
gText_Rom_574A6C: @ 0x08574A6C
	.string "はやおき{EOS}"
	.if (. - gText_Rom_574A6C) > 0x5
	.error "gText_Rom_574A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A6C) < 0x5
	.space 0x5 - (. - gText_Rom_574A6C)
	.endif

	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gText_Rom_574A71
gText_Rom_574A71: @ 0x08574A71
	.string "はりきり{EOS}"
	.if (. - gText_Rom_574A71) > 0x5
	.error "gText_Rom_574A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A71) < 0x5
	.space 0x5 - (. - gText_Rom_574A71)
	.endif
