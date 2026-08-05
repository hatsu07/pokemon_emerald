	@ src/battle_message.c:486 battle_message_line_486
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA746
gText_Rom_5AA746: @ 0x085AA746
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nひざしが つよくなった!$"
	.if (. - gText_Rom_5AA746) != 0x15
	.error "gText_Rom_5AA746 must retain its original byte length"
	.endif
