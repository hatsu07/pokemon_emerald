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
	.incbin "baserom.gba", 0x5cb7d6, 0x14
	.globl gUnknown_85CB7EA
gUnknown_85CB7EA: @ 0x085CB7EA
	.incbin "baserom.gba", 0x5cb7ea, 0x14
	.globl gUnknown_85CB7FE
gUnknown_85CB7FE: @ 0x085CB7FE
	.incbin "baserom.gba", 0x5cb7fe, 0xa
	.globl gUnknown_85CB808
gUnknown_85CB808: @ 0x085CB808

