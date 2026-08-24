
	@ src/use_pokeblock.c:163 sText_NatureSlash
	.globl sText_NatureSlash
sText_NatureSlash: @ 0x085CB7A2
	.string "せいかく/{EOS}"
	.if (. - sText_NatureSlash) > 0x6
	.error "sText_NatureSlash may not grow beyond its original slot"
	.endif
	.if (. - sText_NatureSlash) < 0x6
	.space 0x6 - (. - sText_NatureSlash)
	.endif

	@ src/pokenav_match_call_gfx.c:129 gText_TrainerCloseBy
	.globl gText_TrainerCloseBy
gText_TrainerCloseBy: @ 0x085CB7A8
	.string "ちかくに いるみたいだから\nちょくせつ あって はなそう!{EOS}"
	.if (. - gText_TrainerCloseBy) > 0x1e
	.error "gText_TrainerCloseBy may not grow beyond its original slot"
	.endif
	.if (. - gText_TrainerCloseBy) < 0x1e
	.space 0x1e - (. - gText_TrainerCloseBy)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CB7C6: menu_specialized.s: sub_081D2504; pokenav_unk_4.s: sub_081CCF84
	.globl gText_InParty
gText_InParty: @ 0x085CB7C6
	@ JP Pokenav condition-list location text used when box == TOTAL_BOXES_COUNT (party).
	.byte 0x13, 0x23, 0x11
	.if (. - gText_InParty) != 0x3
	.error "gText_InParty size mismatch"
	.endif
	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CB7C9
gText_Rom_5CB7C9: @ 0x085CB7C9
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5CB7C9) > 0x5
	.error "gText_Rom_5CB7C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7C9) < 0x5
	.space 0x5 - (. - gText_Rom_5CB7C9)
	.endif

	@ asm/pokenav_unk_4.s:6801 sub_081CDE98
	.globl gText_Rom_5CB7CE
gText_Rom_5CB7CE: @ 0x085CB7CE
	.string "ばんめ{EOS}"
	.if (. - gText_Rom_5CB7CE) > 0x4
	.error "gText_Rom_5CB7CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7CE) < 0x4
	.space 0x4 - (. - gText_Rom_5CB7CE)
	.endif
	@ src/data/easy_chat/easy_chat_group_events.h:22 gEasyChatWord_Ribbon (+1 aliases)
	.globl gEasyChatWord_Ribbon_Copy_Battle
gEasyChatWord_Ribbon_Copy_Battle: @ 0x085CB7D2
	.string "リボン{EOS}"
	.if (. - gEasyChatWord_Ribbon_Copy_Battle) > 0x4
	.error "gEasyChatWord_Ribbon_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Ribbon_Copy_Battle) < 0x4
	.space 0x4 - (. - gEasyChatWord_Ribbon_Copy_Battle)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CB7D6: pokenav_unk_10.s: sub_081D06A0; pokenav_unk_4.s: sub_081CEFA0
	.globl gText_PokenavMonInfo_Male
gText_PokenavMonInfo_Male: @ 0x085CB7D6
	@ JP Pokenav mon-info dynamic-placeholder template selected for MON_MALE.
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x05, 0x01, 0x06, 0xB5, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0xFF
	.if (. - gText_PokenavMonInfo_Male) != 0x14
	.error "gText_PokenavMonInfo_Male size mismatch"
	.endif
	.globl gText_PokenavMonInfo_Female
gText_PokenavMonInfo_Female: @ 0x085CB7EA
	@ JP Pokenav mon-info dynamic-placeholder template selected for MON_FEMALE.
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x07, 0x01, 0x08, 0xB6, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0xFF
	.if (. - gText_PokenavMonInfo_Female) != 0x14
	.error "gText_PokenavMonInfo_Female size mismatch"
	.endif
	.globl gText_PokenavMonInfo_Genderless
gText_PokenavMonInfo_Genderless: @ 0x085CB7FE
	@ JP Pokenav mon-info dynamic-placeholder template selected for genderless/other.
	.byte 0xF7, 0x00, 0x00, 0x00, 0xBA, 0xF9, 0x05, 0xF7, 0x01, 0xFF
	.if (. - gText_PokenavMonInfo_Genderless) != 0xA
	.error "gText_PokenavMonInfo_Genderless size mismatch"
	.endif
	.globl gText_Rom_5CB808

