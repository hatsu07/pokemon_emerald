	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8DE4
gText_Rom_5C8DE4: @ 0x085C8DE4
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_5C8DE4) != 0x8
	.error "gText_Rom_5C8DE4 must retain its original byte length"
	.endif

	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ContinueMenuTime_Copy_Rom_5C8DEC
gText_ContinueMenuTime_Copy_Rom_5C8DEC: @ 0x085C8DEC
	.string "プレイじかん{EOS}"
	.if (. - gText_ContinueMenuTime_Copy_Rom_5C8DEC) != 0x7
	.error "gText_ContinueMenuTime_Copy_Rom_5C8DEC must retain its original byte length"
	.endif

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_Rom_5C8DF3
gText_Rom_5C8DF3: @ 0x085C8DF3
	.string "もっているバッジ{EOS}"
	.if (. - gText_Rom_5C8DF3) > 0x9
	.error "gText_Rom_5C8DF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DF3) < 0x9
	.space 0x9 - (. - gText_Rom_5C8DF3)
	.endif
