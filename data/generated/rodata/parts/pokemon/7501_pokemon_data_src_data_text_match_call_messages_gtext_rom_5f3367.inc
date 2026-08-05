	@ src/data/text/match_call_messages.h:246 gText_MatchCallPicnicker_Diana_Strategy
	.globl gText_Rom_5F3367
gText_Rom_5F3367: @ 0x085F3367
	.string "いろいろ かんがえてるのよ$"
	.if (. - gText_Rom_5F3367) > 0xe
	.error "gText_Rom_5F3367 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3367) < 0xe
	.space 0xe - (. - gText_Rom_5F3367)
	.endif
