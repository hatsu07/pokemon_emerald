	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gEasyChatWord_Adore_Copy_Pokemon
gEasyChatWord_Adore_Copy_Pokemon: @ 0x085CB3F5
	.string "だいすき{EOS}"
	.if (. - gEasyChatWord_Adore_Copy_Pokemon) > 0x5
	.error "gEasyChatWord_Adore_Copy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Adore_Copy_Pokemon) < 0x5
	.space 0x5 - (. - gEasyChatWord_Adore_Copy_Pokemon)
	.endif
	@ Decoded text from ROM range: offset=0x5CB3FA, size=0x3
	.string "もり{EOS}"
