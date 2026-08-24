	@ src/battle_debug.c:321 battle_debug_line_321 (+2 aliases)
	.globl gText_Rom_579E98
gText_Rom_579E98: @ 0x08579E98
	.string "じょうたい{EOS}"
	.if (. - gText_Rom_579E98) > 0x6
	.error "gText_Rom_579E98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E98) < 0x6
	.space 0x6 - (. - gText_Rom_579E98)
	.endif
	@ src/data/easy_chat/easy_chat_groups.h:106 easy_chat_groups_line_106
	.globl gText_Rom_579E9E
gText_Rom_579E9E: @ 0x08579E9E
	.string "こうどう{EOS}"
	.if (. - gText_Rom_579E9E) > 0x5
	.error "gText_Rom_579E9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E9E) < 0x5
	.space 0x5 - (. - gText_Rom_579E9E)
	.endif
	@ src/data/easy_chat/easy_chat_group_lifestyle.h:118 easy_chat_group_lifestyle_line_118 (+1 aliases)
	.globl gText_Rom_579EA3
gText_Rom_579EA3: @ 0x08579EA3
	.string "せいかつ{EOS}"
	.if (. - gText_Rom_579EA3) > 0x5
	.error "gText_Rom_579EA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EA3) < 0x5
	.space 0x5 - (. - gText_Rom_579EA3)
	.endif
	@ src/data/easy_chat/easy_chat_group_hobbies.h:136 easy_chat_group_hobbies_line_136 (+1 aliases)
	.globl gText_Rom_579EA8
gText_Rom_579EA8: @ 0x08579EA8
	.string "しゅみ{EOS}"
	.if (. - gText_Rom_579EA8) > 0x4
	.error "gText_Rom_579EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EA8) < 0x4
	.space 0x4 - (. - gText_Rom_579EA8)
	.endif
	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_579EAC
gText_Rom_579EAC: @ 0x08579EAC
	.string "じかん{EOS}"
	.if (. - gText_Rom_579EAC) > 0x4
	.error "gText_Rom_579EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EAC) < 0x4
	.space 0x4 - (. - gText_Rom_579EAC)
	.endif
	@ src/data/easy_chat/easy_chat_groups.h:134 easy_chat_groups_line_134
	.globl gText_Rom_579EB0
gText_Rom_579EB0: @ 0x08579EB0
	.string "あれこれ{EOS}"
	.if (. - gText_Rom_579EB0) > 0x5
	.error "gText_Rom_579EB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB0) < 0x5
	.space 0x5 - (. - gText_Rom_579EB0)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:141 easy_chat_groups_line_141
	.globl gText_Rom_579EB5
gText_Rom_579EB5: @ 0x08579EB5
	.string "くりかえし{EOS}"
	.if (. - gText_Rom_579EB5) > 0x6
	.error "gText_Rom_579EB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB5) < 0x6
	.space 0x6 - (. - gText_Rom_579EB5)
	.endif
