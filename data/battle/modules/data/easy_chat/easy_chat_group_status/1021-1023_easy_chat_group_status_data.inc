	.globl gText_Rom_5749F9
	.set gText_Rom_5749F9, gText_Rom_5749F7 + 0x2
	@ src/battle_debug.c:318 battle_debug_line_318 (+1 aliases)
	.globl gText_Rom_5749FD
gText_Rom_5749FD: @ 0x085749FD
	.string "タイプ{EOS}"
	.if (. - gText_Rom_5749FD) > 0x4
	.error "gText_Rom_5749FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749FD) < 0x4
	.space 0x4 - (. - gText_Rom_5749FD)
	.endif
	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_574A01
gText_Rom_574A01: @ 0x08574A01
	.string "たくましい{EOS}"
	.if (. - gText_Rom_574A01) > 0x6
	.error "gText_Rom_574A01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A01) < 0x6
	.space 0x6 - (. - gText_Rom_574A01)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gText_Rom_574A07
gText_Rom_574A07: @ 0x08574A07
	.string "たくましさ{EOS}"
	.if (. - gText_Rom_574A07) > 0x6
	.error "gText_Rom_574A07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A07) < 0x6
	.space 0x6 - (. - gText_Rom_574A07)
	.endif
