	@ src/data/text/match_call_messages.h:121 gText_MatchCallPsychic_Cameron_Strategy
	.globl gText_Rom_5F2E1B
gText_Rom_5F2E1B: @ 0x085F2E1B
	.string "あいてを ほんろう させる$"
	.if (. - gText_Rom_5F2E1B) > 0xe
	.error "gText_Rom_5F2E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E1B) < 0xe
	.space 0xe - (. - gText_Rom_5F2E1B)
	.endif
