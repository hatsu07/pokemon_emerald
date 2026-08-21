	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_5CACA0
gText_Rom_5CACA0: @ 0x085CACA0
	.string "ノーマル{EOS}"
	.if (. - gText_Rom_5CACA0) > 0x5
	.error "gText_Rom_5CACA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gText_Rom_5CACA5
gText_Rom_5CACA5: @ 0x085CACA5
	.string "スーパー{EOS}"
	.if (. - gText_Rom_5CACA5) > 0x5
	.error "gText_Rom_5CACA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA5) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA5)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gText_Rom_5CACAA
gText_Rom_5CACAA: @ 0x085CACAA
	.string "ハイパー{EOS}"
	.if (. - gText_Rom_5CACAA) > 0x5
	.error "gText_Rom_5CACAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAA) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAA)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_5CACAF
gText_Rom_5CACAF: @ 0x085CACAF
	.string "マスター{EOS}"
	.if (. - gText_Rom_5CACAF) > 0x5
	.error "gText_Rom_5CACAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAF) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAF)
	.endif
