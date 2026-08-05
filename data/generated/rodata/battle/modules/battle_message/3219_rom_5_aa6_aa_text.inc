	@ src/battle_message.c:77 gText_StatFell
	.globl gText_Rom_5AA6AA
gText_Rom_5AA6AA: @ 0x085AA6AA
	.string "さがった！$"
	.if (. - gText_Rom_5AA6AA) > 0x6
	.error "gText_Rom_5AA6AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6AA) < 0x6
	.space 0x6 - (. - gText_Rom_5AA6AA)
	.endif
