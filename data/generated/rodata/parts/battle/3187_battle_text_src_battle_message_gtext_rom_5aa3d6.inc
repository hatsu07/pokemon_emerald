	@ src/battle_message.c:360 battle_message_line_360
	.globl gText_Rom_5AA3D6
gText_Rom_5AA3D6: @ 0x085AA3D6
	.string "{B_ATK_NAME_WITH_PREFIX}の {B_BUFF1}は\nおんねんで わざポイントが 0に なった!$"
	.if (. - gText_Rom_5AA3D6) > 0x1e
	.error "gText_Rom_5AA3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3D6) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA3D6)
	.endif
