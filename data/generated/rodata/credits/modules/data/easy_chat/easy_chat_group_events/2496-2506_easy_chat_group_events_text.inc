	.globl gText_Rom_578473
	.set gText_Rom_578473, gText_Rom_578470 + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:16 gEasyChatWord_Hidden (+1 aliases)
	.globl gText_Rom_578477
gText_Rom_578477: @ 0x08578477
	.string "ひでん$"
	.if (. - gText_Rom_578477) > 0x4
	.error "gText_Rom_578477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578477) < 0x4
	.space 0x4 - (. - gText_Rom_578477)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_57847B
gText_Rom_57847B: @ 0x0857847B
	.string "ひみつきち$"
	.if (. - gText_Rom_57847B) > 0x6
	.error "gText_Rom_57847B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57847B) < 0x6
	.space 0x6 - (. - gText_Rom_57847B)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:18 gEasyChatWord_Blend (+1 aliases)
	.globl gText_Rom_578481
gText_Rom_578481: @ 0x08578481
	.string "ブレンド$"
	.if (. - gText_Rom_578481) > 0x5
	.error "gText_Rom_578481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578481) < 0x5
	.space 0x5 - (. - gText_Rom_578481)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:19 gEasyChatWord_POKEBLOCK (+1 aliases)
	.globl gText_Rom_578486
gText_Rom_578486: @ 0x08578486
	.string "ポロック$"
	.if (. - gText_Rom_578486) > 0x5
	.error "gText_Rom_578486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578486) < 0x5
	.space 0x5 - (. - gText_Rom_578486)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_57848B
gText_Rom_57848B: @ 0x0857848B
	.string "マスター$"
	.if (. - gText_Rom_57848B) > 0x5
	.error "gText_Rom_57848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57848B) < 0x5
	.space 0x5 - (. - gText_Rom_57848B)
	.endif

