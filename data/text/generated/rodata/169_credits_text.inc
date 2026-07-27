	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5C8BEE
gText_Rom_5C8BEE: @ 0x085C8BEE
	.string "します$"
	.if (. - gText_Rom_5C8BEE) > 0x4
	.error "gText_Rom_5C8BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BEE) < 0x4
	.space 0x4 - (. - gText_Rom_5C8BEE)
	.endif
	.globl gUnknown_85C8BF2
gUnknown_85C8BF2: @ 0x085C8BF2

	@ src/strings.c:972 gJPText_GameFreak
	.globl gText_Rom_5C8BF2
gText_Rom_5C8BF2: @ 0x085C8BF2
	.string "{COLOR RED}{SHADOW LIGHT_RED}ゲームフリーク$"
	.if (. - gText_Rom_5C8BF2) > 0xe
	.error "gText_Rom_5C8BF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BF2) < 0xe
	.space 0xe - (. - gText_Rom_5C8BF2)
	.endif
	.globl gUnknown_85C8C00
gUnknown_85C8C00: @ 0x085C8C00

	@ src/strings.c:973 gText_DiplomaEmpty
	.globl gText_Rom_5C8C00
gText_Rom_5C8C00: @ 0x085C8C00
	.string "{COLOR RED}{SHADOW LIGHT_RED}$"
	.if (. - gText_Rom_5C8C00) > 0x7
	.error "gText_Rom_5C8C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C00) < 0x7
	.space 0x7 - (. - gText_Rom_5C8C00)
	.endif
	.incbin "baserom.gba", 0x5c8c07, 0x1
	.globl gUnknown_85C8C08
gUnknown_85C8C08: @ 0x085C8C08
	.incbin "baserom.gba", 0x5c8c08, 0x8
	.globl gUnknown_85C8C10
gUnknown_85C8C10: @ 0x085C8C10
	.incbin "baserom.gba", 0x5c8c10, 0x10
	.globl gUnknown_85C8C20
gUnknown_85C8C20: @ 0x085C8C20
	.incbin "baserom.gba", 0x5c8c20, 0x4
	.globl gUnknown_85C8C24
gUnknown_85C8C24: @ 0x085C8C24
	.incbin "baserom.gba", 0x5c8c24, 0x1
	.globl gUnknown_85C8C25
gUnknown_85C8C25: @ 0x085C8C25
	.incbin "baserom.gba", 0x5c8c25, 0x3
	.globl gUnknown_85C8C28
gUnknown_85C8C28: @ 0x085C8C28

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5C8C28
gText_Rom_5C8C28: @ 0x085C8C28
	.string "ちゃん$"
	.if (. - gText_Rom_5C8C28) > 0x4
	.error "gText_Rom_5C8C28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C28) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C28)
	.endif

