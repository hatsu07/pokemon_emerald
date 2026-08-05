	@ src/data/text/match_call_messages.h:321 gText_MatchCallPkmnTrainer_Wally_Strategy
	.globl gText_Rom_5F3697
gText_Rom_5F3697: @ 0x085F3697
	.string "きもちを すべて だしきります$"
	.if (. - gText_Rom_5F3697) > 0x10
	.error "gText_Rom_5F3697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3697) < 0x10
	.space 0x10 - (. - gText_Rom_5F3697)
	.endif
