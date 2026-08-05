	@ src/battle_message.c:327 battle_message_line_327
	.globl gText_Rom_5AA130
gText_Rom_5AA130: @ 0x085AA130
	.string "マグニチュード{B_BUFF1}！！$"
	.if (. - gText_Rom_5AA130) > 0xc
	.error "gText_Rom_5AA130 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA130) < 0xc
	.space 0xc - (. - gText_Rom_5AA130)
	.endif
