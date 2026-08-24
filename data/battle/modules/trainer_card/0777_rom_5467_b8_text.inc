	@ src/trainer_card.c:1184 sText_HofTime
	.globl sText_HofTime
sText_HofTime: @ 0x085467B8
	.string "{STR_VAR_1}:{STR_VAR_2}:{STR_VAR_3}{EOS}"
	.if (. - sText_HofTime) > 0x9
	.error "sText_HofTime may not grow beyond its original slot"
	.endif
	.if (. - sText_HofTime) < 0x9
	.space 0x9 - (. - sText_HofTime)
	.endif
