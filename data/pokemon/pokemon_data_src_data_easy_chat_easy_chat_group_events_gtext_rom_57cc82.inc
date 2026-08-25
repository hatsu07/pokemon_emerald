	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gEasyChatWord_Tower_Copy_Pokemon
gEasyChatWord_Tower_Copy_Pokemon: @ 0x0857CC82
	.string "タワー{EOS}"
	.if (. - gEasyChatWord_Tower_Copy_Pokemon) > 0x4
	.error "gEasyChatWord_Tower_Copy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Tower_Copy_Pokemon) < 0x4
	.space 0x4 - (. - gEasyChatWord_Tower_Copy_Pokemon)
	.endif
	@ Decoded text from ROM range: offset=0x57CC86, size=0x16
	.string "てんのあな{EOS}"
	.string "かえらずのあな{EOS}"
	.string "しるしのはやし{EOS}"
