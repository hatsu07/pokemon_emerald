	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD415
gText_Rom_5DD415: @ 0x085DD415
	.string "オープンレベル$"
	.if (. - gText_Rom_5DD415) != 0x8
	.error "gText_Rom_5DD415 must retain its original byte length"
	.endif
	.globl gText_Rom_5DD419
	.set gText_Rom_5DD419, gText_Rom_5DD415 + 0x4
	.globl gUnknown_85DD41D
gUnknown_85DD41D: @ 0x085DD41D

	@ src/strings.c:892 gText_WinStreak
	.globl gText_Rom_5DD41D
gText_Rom_5DD41D: @ 0x085DD41D
	.string "{STR_VAR_1}れんしょう$"
	.if (. - gText_Rom_5DD41D) > 0x8
	.error "gText_Rom_5DD41D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD41D) < 0x8
	.space 0x8 - (. - gText_Rom_5DD41D)
	.endif
	.globl gUnknown_85DD425
gUnknown_85DD425: @ 0x085DD425

	@ src/strings.c:893 gText_Current
	.globl gText_Rom_5DD425
gText_Rom_5DD425: @ 0x085DD425
	.string "げんざい$"
	.if (. - gText_Rom_5DD425) > 0x5
	.error "gText_Rom_5DD425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD425) < 0x5
	.space 0x5 - (. - gText_Rom_5DD425)
	.endif
	.globl gUnknown_85DD42A
gUnknown_85DD42A: @ 0x085DD42A

	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_5DD42A
gText_Rom_5DD42A: @ 0x085DD42A
	.string "さいこう$"
	.if (. - gText_Rom_5DD42A) > 0x5
	.error "gText_Rom_5DD42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD42A) < 0x5
	.space 0x5 - (. - gText_Rom_5DD42A)
	.endif
	.globl gUnknown_85DD42F
gUnknown_85DD42F: @ 0x085DD42F

	@ src/strings.c:895 gText_Prev
	.globl gText_Rom_5DD42F
gText_Rom_5DD42F: @ 0x085DD42F
	.string "ぜんかい$"
	.if (. - gText_Rom_5DD42F) > 0x5
	.error "gText_Rom_5DD42F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD42F) < 0x5
	.space 0x5 - (. - gText_Rom_5DD42F)
	.endif

