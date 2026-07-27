	@ src/battle_debug.c:236 sText_HeldItem (+4 aliases)
	.globl gText_Rom_5C93D7
gText_Rom_5C93D7: @ 0x085C93D7
	.string "もちもの$"
	.if (. - gText_Rom_5C93D7) > 0x5
	.error "gText_Rom_5C93D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93D7) < 0x5
	.space 0x5 - (. - gText_Rom_5C93D7)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_5C93DC
gText_Rom_5C93DC: @ 0x085C93DC
	.string "メール$"
	.if (. - gText_Rom_5C93DC) > 0x4
	.error "gText_Rom_5C93DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93DC) < 0x4
	.space 0x4 - (. - gText_Rom_5C93DC)
	.endif

