	@ src/data/text/match_call_messages.h:201 gText_MatchCallTriathlete_Katelyn_Strategy
	.globl gText_Rom_5F317D
gText_Rom_5F317D: @ 0x085F317D
	.string "がんがん せめまくる!$"
	.if (. - gText_Rom_5F317D) > 0xc
	.error "gText_Rom_5F317D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F317D) < 0xc
	.space 0xc - (. - gText_Rom_5F317D)
	.endif
