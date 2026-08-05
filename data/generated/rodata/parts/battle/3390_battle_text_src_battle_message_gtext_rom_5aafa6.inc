	@ src/battle_message.c:123 sText_PkmnThatsEnough
	.globl gText_Rom_5AAFA6
gText_Rom_5AAFA6: @ 0x085AAFA6
	.string "{B_BUFF1} もういい！\nもどれ！$"
	.if (. - gText_Rom_5AAFA6) > 0xe
	.error "gText_Rom_5AAFA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFA6) < 0xe
	.space 0xe - (. - gText_Rom_5AAFA6)
	.endif
