	@ src/data/easy_chat/easy_chat_group_battle.h:274 easy_chat_group_battle_line_274
	.globl gText_Rom_57511A
gText_Rom_57511A: @ 0x0857511A
	.string "まいった$"
	.if (. - gText_Rom_57511A) > 0x5
	.error "gText_Rom_57511A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57511A) < 0x5
	.space 0x5 - (. - gText_Rom_57511A)
	.endif
	@ Decoded text from ROM range: offset=0x57511F, size=0x3
	.string "まけ$"
