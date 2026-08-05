	@ src/data/text/match_call_messages.h:371 gText_MatchCallEliteFour_Phoebe_Strategy
	.globl gText_Rom_5F38C6
gText_Rom_5F38C6: @ 0x085F38C6
	.string "あいてを まどわせて たたかう$"
	.if (. - gText_Rom_5F38C6) > 0x10
	.error "gText_Rom_5F38C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38C6) < 0x10
	.space 0x10 - (. - gText_Rom_5F38C6)
	.endif
