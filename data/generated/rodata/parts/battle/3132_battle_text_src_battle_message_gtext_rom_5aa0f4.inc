	@ src/battle_message.c:324 battle_message_line_324
	.globl gText_Rom_5AA0F4
gText_Rom_5AA0F4: @ 0x085AA0F4
	.string "{B_ATK_NAME_WITH_PREFIX}の ほろびの\nカウントが {B_BUFF1}になった!$"
	.if (. - gText_Rom_5AA0F4) > 0x17
	.error "gText_Rom_5AA0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0F4) < 0x17
	.space 0x17 - (. - gText_Rom_5AA0F4)
	.endif
