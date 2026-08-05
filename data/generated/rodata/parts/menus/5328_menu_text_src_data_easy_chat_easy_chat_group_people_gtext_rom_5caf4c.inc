	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_5CAF4C
gText_Rom_5CAF4C: @ 0x085CAF4C
	.string "あいて$"
	.if (. - gText_Rom_5CAF4C) > 0x4
	.error "gText_Rom_5CAF4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF4C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAF4C)
	.endif
	@ Decoded text from ROM range: offset=0x5CAF50, size=0x14
	.string "トレード　かいすう$"
	.string "トレード　ちゅうい$"
