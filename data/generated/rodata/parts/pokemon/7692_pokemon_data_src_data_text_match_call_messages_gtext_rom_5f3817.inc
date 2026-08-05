	@ src/data/text/match_call_messages.h:356 gText_MatchCallMysticDuo_TateAndLiza_Strategy
	.globl gText_Rom_5F3817
gText_Rom_5F3817: @ 0x085F3817
	.string "ふたりで きょうりょく!$"
	.if (. - gText_Rom_5F3817) > 0xd
	.error "gText_Rom_5F3817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3817) < 0xd
	.space 0xd - (. - gText_Rom_5F3817)
	.endif
