	@ src/data/text/match_call_messages.h:111 gText_MatchCallOldCouple_JohnAndJay_Strategy
	.globl gText_Rom_5F2DA3
gText_Rom_5F2DA3: @ 0x085F2DA3
	.string "ふうふの あいで かつのよ$"
	.if (. - gText_Rom_5F2DA3) > 0xe
	.error "gText_Rom_5F2DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DA3) < 0xe
	.space 0xe - (. - gText_Rom_5F2DA3)
	.endif
