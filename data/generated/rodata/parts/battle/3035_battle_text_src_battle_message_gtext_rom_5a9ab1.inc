	@ src/battle_message.c:246 battle_message_line_246
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9AB1
gText_Rom_5A9AB1: @ 0x085A9AB1
	.string "{B_ATK_NAME_WITH_PREFIX}は メロメロで\nわざが だせなかった!$"
	.if (. - gText_Rom_5A9AB1) != 0x16
	.error "gText_Rom_5A9AB1 must retain its original byte length"
	.endif
