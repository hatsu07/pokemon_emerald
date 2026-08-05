	@ src/data/easy_chat/easy_chat_group_battle.h:154 easy_chat_group_battle_line_154 (+1 aliases)
	.globl gText_Rom_5750C1
gText_Rom_5750C1: @ 0x085750C1
	.string "しょうり$"
	.if (. - gText_Rom_5750C1) > 0x5
	.error "gText_Rom_5750C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C1) < 0x5
	.space 0x5 - (. - gText_Rom_5750C1)
	.endif
	@ Decoded text from ROM range: offset=0x5750C6, size=0x3
	.string "せめ$"
