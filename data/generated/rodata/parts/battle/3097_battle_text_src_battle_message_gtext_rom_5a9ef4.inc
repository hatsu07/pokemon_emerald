	@ src/battle_message.c:296 battle_message_line_296
	.globl gText_Rom_5A9EF4
gText_Rom_5A9EF4: @ 0x085A9EF4
	.string "{B_DEF_NAME_WITH_PREFIX}には\nぜんぜんきいてない!$"
	.if (. - gText_Rom_5A9EF4) > 0x10
	.error "gText_Rom_5A9EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EF4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9EF4)
	.endif
