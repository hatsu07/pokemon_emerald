	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gText_Rom_5CB3F5
gText_Rom_5CB3F5: @ 0x085CB3F5
	.string "だいすき{EOS}"
	.if (. - gText_Rom_5CB3F5) > 0x5
	.error "gText_Rom_5CB3F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3F5) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3F5)
	.endif
	@ Decoded text from ROM range: offset=0x5CB3FA, size=0x3
	.string "もり{EOS}"
