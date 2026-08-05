	@ src/data/text/match_call_messages.h:56 gText_MatchCallBeauty_Thalia_Strategy
	.globl gText_Rom_5F2B56
gText_Rom_5F2B56: @ 0x085F2B56
	.string "メロメロに しちゃう!$"
	.if (. - gText_Rom_5F2B56) > 0xc
	.error "gText_Rom_5F2B56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B56) < 0xc
	.space 0xc - (. - gText_Rom_5F2B56)
	.endif
