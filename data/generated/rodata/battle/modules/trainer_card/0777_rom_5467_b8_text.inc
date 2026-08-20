	@ src/trainer_card.c:1184 sText_HofTime
	.globl gText_Rom_5467B8
gText_Rom_5467B8: @ 0x085467B8
	.string "{STR_VAR_1}:{STR_VAR_2}:{STR_VAR_3}{EOS}"
	.if (. - gText_Rom_5467B8) > 0x9
	.error "gText_Rom_5467B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5467B8) < 0x9
	.space 0x9 - (. - gText_Rom_5467B8)
	.endif
