	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gStdString_PokeBalls
gStdString_PokeBalls: @ 0x085CACDE
	.string "ボール{EOS}"
	.if (. - gStdString_PokeBalls) > 0x4
	.error "gStdString_PokeBalls may not grow beyond its original slot"
	.endif
	.if (. - gStdString_PokeBalls) < 0x4
	.space 0x4 - (. - gStdString_PokeBalls)
	.endif
