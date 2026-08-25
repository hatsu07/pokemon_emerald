	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Contest_Copy_EasyChat
gEasyChatWord_Contest_Copy_EasyChat: @ 0x0824C200
	.string "コンテスト{EOS}"
	.if (. - gEasyChatWord_Contest_Copy_EasyChat) != 0x6
	.error "gEasyChatWord_Contest_Copy_EasyChat must retain its original byte length"
	.endif
