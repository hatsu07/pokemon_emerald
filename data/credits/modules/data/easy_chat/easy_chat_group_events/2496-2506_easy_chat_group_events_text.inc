	.globl gText_Rom_578473
	.set gText_Rom_578473, gEasyChatWord_BattleRoom + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:16 gEasyChatWord_Hidden (+1 aliases)
	.globl gEasyChatWord_Hidden
gEasyChatWord_Hidden: @ 0x08578477
	.string "ひでん{EOS}"
	.if (. - gEasyChatWord_Hidden) > 0x4
	.error "gEasyChatWord_Hidden may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Hidden) < 0x4
	.space 0x4 - (. - gEasyChatWord_Hidden)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gEasyChatWord_SecretBase
gEasyChatWord_SecretBase: @ 0x0857847B
	.string "ひみつきち{EOS}"
	.if (. - gEasyChatWord_SecretBase) > 0x6
	.error "gEasyChatWord_SecretBase may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_SecretBase) < 0x6
	.space 0x6 - (. - gEasyChatWord_SecretBase)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:18 gEasyChatWord_Blend (+1 aliases)
	.globl gEasyChatWord_Blend
gEasyChatWord_Blend: @ 0x08578481
	.string "ブレンド{EOS}"
	.if (. - gEasyChatWord_Blend) > 0x5
	.error "gEasyChatWord_Blend may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Blend) < 0x5
	.space 0x5 - (. - gEasyChatWord_Blend)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:19 gEasyChatWord_POKEBLOCK (+1 aliases)
	.globl gEasyChatWord_POKEBLOCK
gEasyChatWord_POKEBLOCK: @ 0x08578486
	.string "ポロック{EOS}"
	.if (. - gEasyChatWord_POKEBLOCK) > 0x5
	.error "gEasyChatWord_POKEBLOCK may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_POKEBLOCK) < 0x5
	.space 0x5 - (. - gEasyChatWord_POKEBLOCK)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gEasyChatWord_Master
gEasyChatWord_Master: @ 0x0857848B
	.string "マスター{EOS}"
	.if (. - gEasyChatWord_Master) > 0x5
	.error "gEasyChatWord_Master may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Master) < 0x5
	.space 0x5 - (. - gEasyChatWord_Master)
	.endif

