	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_5C942E
gText_Rom_5C942E: @ 0x085C942E
	.string "なにを しますか?$"
	.if (. - gText_Rom_5C942E) > 0xa
	.error "gText_Rom_5C942E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C942E) < 0xa
	.space 0xa - (. - gText_Rom_5C942E)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5C9438
gText_Rom_5C9438: @ 0x085C9438
	.string "あげる$"
	.if (. - gText_Rom_5C9438) > 0x4
	.error "gText_Rom_5C9438 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9438) < 0x4
	.space 0x4 - (. - gText_Rom_5C9438)
	.endif
	.globl gUnknown_85C943C
gUnknown_85C943C: @ 0x085C943C

	@ src/strings.c:155 gText_xVar1
	.globl gText_Rom_5C943C
gText_Rom_5C943C: @ 0x085C943C
	.string "×{STR_VAR_1}$"
	.if (. - gText_Rom_5C943C) > 0x4
	.error "gText_Rom_5C943C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C943C) < 0x4
	.space 0x4 - (. - gText_Rom_5C943C)
	.endif
	.globl gUnknown_85C9440
gUnknown_85C9440: @ 0x085C9440

