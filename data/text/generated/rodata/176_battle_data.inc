	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5C8FA7
gText_Rom_5C8FA7: @ 0x085C8FA7
	.string "ポケモン$"
	.if (. - gText_Rom_5C8FA7) > 0x5
	.error "gText_Rom_5C8FA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FA7) < 0x5
	.space 0x5 - (. - gText_Rom_5C8FA7)
	.endif
	.globl gUnknown_85C8FAC
gUnknown_85C8FAC: @ 0x085C8FAC
	.incbin "baserom.gba", 0x5c8fac, 0x7
	.globl gUnknown_85C8FB3
gUnknown_85C8FB3: @ 0x085C8FB3
	.incbin "baserom.gba", 0x5c8fb3, 0x8
	.globl gUnknown_85C8FBB
gUnknown_85C8FBB: @ 0x085C8FBB
	.incbin "baserom.gba", 0x5c8fbb, 0x5

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5C8FC0
gText_Rom_5C8FC0: @ 0x085C8FC0
	.string "ポケモン$"
	.if (. - gText_Rom_5C8FC0) > 0x5
	.error "gText_Rom_5C8FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FC0) < 0x5
	.space 0x5 - (. - gText_Rom_5C8FC0)
	.endif
	.globl gUnknown_85C8FC5
gUnknown_85C8FC5: @ 0x085C8FC5
	.incbin "baserom.gba", 0x5c8fc5, 0x7
	.globl gUnknown_85C8FCC
gUnknown_85C8FCC: @ 0x085C8FCC
	.incbin "baserom.gba", 0x5c8fcc, 0x8
	.globl gUnknown_85C8FD4
gUnknown_85C8FD4: @ 0x085C8FD4
	.incbin "baserom.gba", 0x5c8fd4, 0x2
	.globl gUnknown_85C8FD6
gUnknown_85C8FD6: @ 0x085C8FD6

