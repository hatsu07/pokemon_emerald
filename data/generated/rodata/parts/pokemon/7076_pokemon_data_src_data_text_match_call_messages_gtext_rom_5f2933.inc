	@ src/data/text/match_call_messages.h:6 gText_MatchCallRuinManiac_Andres_Strategy
	.globl gText_Rom_5F2933
gText_Rom_5F2933: @ 0x085F2933
	.string "あんまり つよく ないよ$"
	.if (. - gText_Rom_5F2933) > 0xd
	.error "gText_Rom_5F2933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2933) < 0xd
	.space 0xd - (. - gText_Rom_5F2933)
	.endif
