	@ src/data/text/match_call_messages.h:346 gText_MatchCallReliableOne_Dad_Strategy
	.globl gText_Rom_5F37A8
gText_Rom_5F37A8: @ 0x085F37A8
	.string "りんきおうへんに たたかう$"
	.if (. - gText_Rom_5F37A8) > 0xe
	.error "gText_Rom_5F37A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37A8) < 0xe
	.space 0xe - (. - gText_Rom_5F37A8)
	.endif
