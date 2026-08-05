	@ src/data/text/match_call_messages.h:97 gText_MatchCallGuitarist_Dalton_Pokemon
	.globl gText_Rom_5F2CFF
gText_Rom_5F2CFF: @ 0x085F2CFF
	.string "でんきの ちからを みせるゼ!$"
	.if (. - gText_Rom_5F2CFF) > 0x10
	.error "gText_Rom_5F2CFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CFF) < 0x10
	.space 0x10 - (. - gText_Rom_5F2CFF)
	.endif
