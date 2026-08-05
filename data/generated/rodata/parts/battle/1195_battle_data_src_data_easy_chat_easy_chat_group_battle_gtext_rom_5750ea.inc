	@ src/data/easy_chat/easy_chat_group_battle.h:208 easy_chat_group_battle_line_208 (+1 aliases)
	.globl gText_Rom_5750EA
gText_Rom_5750EA: @ 0x085750EA
	.string "てかげん$"
	.if (. - gText_Rom_5750EA) > 0x5
	.error "gText_Rom_5750EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750EA) < 0x5
	.space 0x5 - (. - gText_Rom_5750EA)
	.endif
	@ Decoded text from ROM range: offset=0x5750EF, size=0x3
	.string "てき$"
