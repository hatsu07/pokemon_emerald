	@ src/data/text/match_call_messages.h:24 gText_MatchCallTuber_Ricky_Intro2
	.globl gText_Rom_5F29FE
gText_Rom_5F29FE: @ 0x085F29FE
	.string "うきわが すき なんだよ!$"
	.if (. - gText_Rom_5F29FE) > 0xe
	.error "gText_Rom_5F29FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29FE) < 0xe
	.space 0xe - (. - gText_Rom_5F29FE)
	.endif
