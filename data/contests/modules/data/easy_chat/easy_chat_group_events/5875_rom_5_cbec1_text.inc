	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gEasyChatWord_SecretBase_Copy_Contests
gEasyChatWord_SecretBase_Copy_Contests: @ 0x085CBEC1
	.string "ひみつきち{EOS}"
	.if (. - gEasyChatWord_SecretBase_Copy_Contests) > 0x6
	.error "gEasyChatWord_SecretBase_Copy_Contests may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_SecretBase_Copy_Contests) < 0x6
	.space 0x6 - (. - gEasyChatWord_SecretBase_Copy_Contests)
	.endif
