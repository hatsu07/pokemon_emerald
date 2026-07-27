	@ src/data/easy_chat/easy_chat_group_trainer.h:52 easy_chat_group_trainer_line_52 (+3 aliases)
	.globl gText_Rom_55EDB4
gText_Rom_55EDB4: @ 0x0855EDB4
	.string "タマゴ$"
	.if (. - gText_Rom_55EDB4) > 0x4
	.error "gText_Rom_55EDB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55EDB4) < 0x4
	.space 0x4 - (. - gText_Rom_55EDB4)
	.endif
	.incbin "baserom.gba", 0x55edb8, 0x254

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_55F00C
gText_Rom_55F00C: @ 0x0855F00C
	.string "こおり$"
	.if (. - gText_Rom_55F00C) > 0x4
	.error "gText_Rom_55F00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F00C) < 0x4
	.space 0x4 - (. - gText_Rom_55F00C)
	.endif
	.incbin "baserom.gba", 0x55f010, 0x753

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_55F763
gText_Rom_55F763: @ 0x0855F763
	.string "じてんしゃ$"
	.if (. - gText_Rom_55F763) > 0x6
	.error "gText_Rom_55F763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F763) < 0x6
	.space 0x6 - (. - gText_Rom_55F763)
	.endif
	.incbin "baserom.gba", 0x55f769, 0x4c

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:214 easy_chat_group_lifestyle_line_214
	.globl gText_Rom_55F7B5
gText_Rom_55F7B5: @ 0x0855F7B5
	.string "マシン$"
	.if (. - gText_Rom_55F7B5) > 0x4
	.error "gText_Rom_55F7B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F7B5) < 0x4
	.space 0x4 - (. - gText_Rom_55F7B5)
	.endif
	.incbin "baserom.gba", 0x55f7b9, 0x1b2

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_55F96B
gText_Rom_55F96B: @ 0x0855F96B
	.string "じてんしゃ$"
	.if (. - gText_Rom_55F96B) > 0x6
	.error "gText_Rom_55F96B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F96B) < 0x6
	.space 0x6 - (. - gText_Rom_55F96B)
	.endif
	.incbin "baserom.gba", 0x55f971, 0x4c

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:136 easy_chat_group_lifestyle_line_136
	.globl gText_Rom_55F9BD
gText_Rom_55F9BD: @ 0x0855F9BD
	.string "てがみ$"
	.if (. - gText_Rom_55F9BD) > 0x4
	.error "gText_Rom_55F9BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F9BD) < 0x4
	.space 0x4 - (. - gText_Rom_55F9BD)
	.endif
	.incbin "baserom.gba", 0x55f9c1, 0x1d7

