	@ asm/battle_message.s:2911 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC96
gText_Rom_5ABC96: @ 0x085ABC96
	.string "は$"
	.if (. - gText_Rom_5ABC96) > 0x2
	.error "gText_Rom_5ABC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC96) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC96)
	.endif
