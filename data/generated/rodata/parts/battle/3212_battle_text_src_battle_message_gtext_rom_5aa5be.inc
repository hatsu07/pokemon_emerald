	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA5BE
gText_Rom_5AA5BE: @ 0x085AA5BE
	.string "あがった！$"
	.if (. - gText_Rom_5AA5BE) > 0x6
	.error "gText_Rom_5AA5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA5BE) < 0x6
	.space 0x6 - (. - gText_Rom_5AA5BE)
	.endif
