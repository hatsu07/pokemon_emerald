	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gEasyChatWord_Events_Copy_Battle
gEasyChatWord_Events_Copy_Battle: @ 0x08579EBB
	.string "イベント{EOS}"
	.if (. - gEasyChatWord_Events_Copy_Battle) > 0x5
	.error "gEasyChatWord_Events_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Events_Copy_Battle) < 0x5
	.space 0x5 - (. - gEasyChatWord_Events_Copy_Battle)
	.endif
	@ src/data/easy_chat/easy_chat_groups.h:155 easy_chat_groups_line_155
	.globl gText_Rom_579EC0
gText_Rom_579EC0: @ 0x08579EC0
	.string "わざ1{EOS}"
	.if (. - gText_Rom_579EC0) > 0x4
	.error "gText_Rom_579EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EC0) < 0x4
	.space 0x4 - (. - gText_Rom_579EC0)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:162 easy_chat_groups_line_162
	.globl gText_Rom_579EC4
gText_Rom_579EC4: @ 0x08579EC4
	.string "わざ2{EOS}"
	.if (. - gText_Rom_579EC4) > 0x4
	.error "gText_Rom_579EC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EC4) < 0x4
	.space 0x4 - (. - gText_Rom_579EC4)
	.endif
	@ analyzed canonical ROM range 0x08579EC8-0x08579ECA
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x65, 0x53, 0x52
