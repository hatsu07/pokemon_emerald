	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gText_Rom_574950
gText_Rom_574950: @ 0x08574950
	.string "かそく{EOS}"
	.if (. - gText_Rom_574950) > 0x4
	.error "gText_Rom_574950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574950) < 0x4
	.space 0x4 - (. - gText_Rom_574950)
	.endif
	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gText_Rom_574954
gText_Rom_574954: @ 0x08574954
	.string "かっこいい{EOS}"
	.if (. - gText_Rom_574954) > 0x6
	.error "gText_Rom_574954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574954) < 0x6
	.space 0x6 - (. - gText_Rom_574954)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gText_Rom_57495A
gText_Rom_57495A: @ 0x0857495A
	.string "かっこよさ{EOS}"
	.if (. - gText_Rom_57495A) > 0x6
	.error "gText_Rom_57495A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57495A) < 0x6
	.space 0x6 - (. - gText_Rom_57495A)
	.endif
