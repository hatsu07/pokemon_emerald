	@ asm/battle_message.s:2922 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC98
gText_Rom_5ABC98: @ 0x085ABC98
	.string "の$"
	.if (. - gText_Rom_5ABC98) > 0x2
	.error "gText_Rom_5ABC98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC98) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC98)
	.endif
