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
	@ Replaced baserom.gba range: offset=0x5C8FAC, size=0x7
	.byte 0xAC, 0xAC, 0xAC, 0xB8, 0xAC, 0xE1, 0xFF
	.globl gUnknown_85C8FB3
gUnknown_85C8FB3: @ 0x085C8FB3
	@ Replaced baserom.gba range: offset=0x5C8FB3, size=0x8
	.byte 0xAC, 0xAC, 0xAC, 0xB8, 0xAC, 0xDF, 0xDB, 0xFF
	.globl gUnknown_85C8FBB
gUnknown_85C8FBB: @ 0x085C8FBB
	.space 0x5, 0x00

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
	@ Replaced baserom.gba range: offset=0x5C8FC5, size=0x7
	.byte 0x00, 0x00, 0x00, 0xB8, 0x00, 0xE1, 0xFF
	.globl gUnknown_85C8FCC
gUnknown_85C8FCC: @ 0x085C8FCC
	@ Replaced baserom.gba range: offset=0x5C8FCC, size=0x8
	.byte 0x00, 0x00, 0x00, 0xB8, 0x00, 0xDF, 0xDB, 0xFF
	.globl gUnknown_85C8FD4
gUnknown_85C8FD4: @ 0x085C8FD4
	@ Replaced baserom.gba range: offset=0x5C8FD4, size=0x2
	.byte 0x19, 0xFF
	.globl gUnknown_85C8FD6
gUnknown_85C8FD6: @ 0x085C8FD6

