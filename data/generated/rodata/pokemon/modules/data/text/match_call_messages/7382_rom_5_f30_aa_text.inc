	@ src/data/text/match_call_messages.h:181 gText_MatchCallTriathlete_Isaiah_Strategy
	.globl gText_Rom_5F30AA
gText_Rom_5F30AA: @ 0x085F30AA
	.string "ちのりを りようする$"
	.if (. - gText_Rom_5F30AA) > 0xb
	.error "gText_Rom_5F30AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30AA) < 0xb
	.space 0xb - (. - gText_Rom_5F30AA)
	.endif
