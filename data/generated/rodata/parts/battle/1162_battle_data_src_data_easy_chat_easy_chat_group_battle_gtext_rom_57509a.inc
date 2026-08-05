	@ src/data/easy_chat/easy_chat_group_battle.h:106 easy_chat_group_battle_line_106
	.globl gText_Rom_57509A
gText_Rom_57509A: @ 0x0857509A
	.string "こい!$"
	.if (. - gText_Rom_57509A) > 0x4
	.error "gText_Rom_57509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509A) < 0x4
	.space 0x4 - (. - gText_Rom_57509A)
	.endif
