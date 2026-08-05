	@ src/battle_message.c:302 battle_message_line_302
	.globl gText_Rom_5A9F6C
gText_Rom_5A9F6C: @ 0x085A9F6C
	.string "こうげきの はんどうで\n{B_ATK_NAME_WITH_PREFIX}は うごけない!$"
	.if (. - gText_Rom_5A9F6C) > 0x17
	.error "gText_Rom_5A9F6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F6C) < 0x17
	.space 0x17 - (. - gText_Rom_5A9F6C)
	.endif
