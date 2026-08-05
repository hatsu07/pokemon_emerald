	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CB7C9
gText_Rom_5CB7C9: @ 0x085CB7C9
	.string "ポケモン$"
	.if (. - gText_Rom_5CB7C9) > 0x5
	.error "gText_Rom_5CB7C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7C9) < 0x5
	.space 0x5 - (. - gText_Rom_5CB7C9)
	.endif
	.globl gUnknown_85CB7CE
gUnknown_85CB7CE: @ 0x085CB7CE

	@ asm/pokenav_unk_4.s:6801 sub_081CDE98
	.globl gText_Rom_5CB7CE
gText_Rom_5CB7CE: @ 0x085CB7CE
	.string "ばんめ$"
	.if (. - gText_Rom_5CB7CE) > 0x4
	.error "gText_Rom_5CB7CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7CE) < 0x4
	.space 0x4 - (. - gText_Rom_5CB7CE)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:22 gEasyChatWord_Ribbon (+1 aliases)
	.globl gText_Rom_5CB7D2
gText_Rom_5CB7D2: @ 0x085CB7D2
	.string "リボン$"
	.if (. - gText_Rom_5CB7D2) > 0x4
	.error "gText_Rom_5CB7D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7D2) < 0x4
	.space 0x4 - (. - gText_Rom_5CB7D2)
	.endif
	.globl gUnknown_85CB7D6
gUnknown_85CB7D6: @ 0x085CB7D6
	@ Replaced baserom.gba range: offset=0x5CB7D6, size=0x14
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x05, 0x01, 0x06, 0xB5, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0xFF
	.globl gUnknown_85CB7EA
gUnknown_85CB7EA: @ 0x085CB7EA
	@ Replaced baserom.gba range: offset=0x5CB7EA, size=0x14
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x07, 0x01, 0x08, 0xB6, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0xFF
	.globl gUnknown_85CB7FE
gUnknown_85CB7FE: @ 0x085CB7FE
	@ Replaced baserom.gba range: offset=0x5CB7FE, size=0xA
	.byte 0xF7, 0x00, 0x00, 0x00, 0xBA, 0xF9, 0x05, 0xF7, 0x01, 0xFF
	.globl gUnknown_85CB808
gUnknown_85CB808: @ 0x085CB808

