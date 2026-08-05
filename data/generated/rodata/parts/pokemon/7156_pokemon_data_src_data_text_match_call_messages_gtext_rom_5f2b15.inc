	@ src/data/text/match_call_messages.h:49 gText_MatchCallHexManiac_Valerie_Intro2
	.globl gText_Rom_5F2B15
gText_Rom_5F2B15: @ 0x085F2B15
	.string "モノが みえてしまうの……$"
	.if (. - gText_Rom_5F2B15) > 0xe
	.error "gText_Rom_5F2B15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B15) < 0xe
	.space 0xe - (. - gText_Rom_5F2B15)
	.endif
