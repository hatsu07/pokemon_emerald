	@ src/battle_message.c:323 battle_message_line_323
	.globl gText_Rom_5AA0E2
gText_Rom_5AA0E2: @ 0x085AA0E2
	.string "{B_DEF_NAME_WITH_PREFIX}の\nしょうたいを みやぶった!$"
	.if (. - gText_Rom_5AA0E2) > 0x12
	.error "gText_Rom_5AA0E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0E2) < 0x12
	.space 0x12 - (. - gText_Rom_5AA0E2)
	.endif
