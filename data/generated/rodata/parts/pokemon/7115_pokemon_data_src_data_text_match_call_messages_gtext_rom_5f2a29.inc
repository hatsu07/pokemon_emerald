	@ src/data/text/match_call_messages.h:28 gText_MatchCallSisAndBro_LilaAndRoy_Intro1
	.globl gText_Rom_5F2A29
gText_Rom_5F2A29: @ 0x085F2A29
	.string "きょうだい なかよく$"
	.if (. - gText_Rom_5F2A29) > 0xb
	.error "gText_Rom_5F2A29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A29) < 0xb
	.space 0xb - (. - gText_Rom_5F2A29)
	.endif
