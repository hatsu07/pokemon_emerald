	@ src/data/text/match_call_messages.h:256 gText_MatchCallSailor_Ernest_Strategy
	.globl gText_Rom_5F33D8
gText_Rom_5F33D8: @ 0x085F33D8
	.string "ちからで おしまくるぜ$"
	.if (. - gText_Rom_5F33D8) > 0xc
	.error "gText_Rom_5F33D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33D8) < 0xc
	.space 0xc - (. - gText_Rom_5F33D8)
	.endif
