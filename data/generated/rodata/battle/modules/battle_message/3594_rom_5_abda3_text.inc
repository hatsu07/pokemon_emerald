	@ src/battle_message.c:1516 gText_Mind
	.globl gText_Rom_5ABDA3
gText_Rom_5ABDA3: @ 0x085ABDA3
	.string "こころ$"
	.if (. - gText_Rom_5ABDA3) > 0x4
	.error "gText_Rom_5ABDA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABDA3) < 0x4
	.space 0x4 - (. - gText_Rom_5ABDA3)
	.endif
