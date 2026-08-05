	@ src/data/text/match_call_messages.h:258 gText_MatchCallSailor_Ernest_Intro1
	.globl gText_Rom_5F33F0
gText_Rom_5F33F0: @ 0x085F33F0
	.string "うみの おとこは きが あらい$"
	.if (. - gText_Rom_5F33F0) > 0x10
	.error "gText_Rom_5F33F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33F0) < 0x10
	.space 0x10 - (. - gText_Rom_5F33F0)
	.endif
