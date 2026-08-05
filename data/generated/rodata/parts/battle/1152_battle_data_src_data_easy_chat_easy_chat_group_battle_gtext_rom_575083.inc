	@ src/data/easy_chat/easy_chat_group_battle.h:76 easy_chat_group_battle_line_76
	.globl gText_Rom_575083
gText_Rom_575083: @ 0x08575083
	.string "かなわない$"
	.if (. - gText_Rom_575083) > 0x6
	.error "gText_Rom_575083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575083) < 0x6
	.space 0x6 - (. - gText_Rom_575083)
	.endif
