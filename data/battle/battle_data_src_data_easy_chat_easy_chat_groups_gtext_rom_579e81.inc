	@ src/battle_debug.c:319 battle_debug_line_319 (+1 aliases)
	.globl gText_Rom_579E77
gText_Rom_579E77: @ 0x08579E77
	.string "ステータス{EOS}"
	.if (. - gText_Rom_579E77) > 0x6
	.error "gText_Rom_579E77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E77) < 0x6
	.space 0x6 - (. - gText_Rom_579E77)
	.endif
	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_579E7D
gText_Rom_579E7D: @ 0x08579E7D
	.string "バトル{EOS}"
	.if (. - gText_Rom_579E7D) > 0x4
	.error "gText_Rom_579E7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E7D) < 0x4
	.space 0x4 - (. - gText_Rom_579E7D)
	.endif
	@ src/data/easy_chat/easy_chat_groups.h:57 easy_chat_groups_line_57 (+1 aliases)
	.globl gText_Rom_579E81
gText_Rom_579E81: @ 0x08579E81
	.string "あいさつ{EOS}"
	.if (. - gText_Rom_579E81) > 0x5
	.error "gText_Rom_579E81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E81) < 0x5
	.space 0x5 - (. - gText_Rom_579E81)
	.endif
	@ Decoded text from ROM range: offset=0x579E86, size=0x6
	.string "ひと{EOS}"
	.string "こえ{EOS}"
