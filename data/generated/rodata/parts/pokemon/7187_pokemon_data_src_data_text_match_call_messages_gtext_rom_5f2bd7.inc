	@ src/data/text/match_call_messages.h:68 gText_MatchCallRichBoy_Winston_Intro1
	.globl gText_Rom_5F2BD7
gText_Rom_5F2BD7: @ 0x085F2BD7
	.string "おかねもちの ボクだから$"
	.if (. - gText_Rom_5F2BD7) > 0xd
	.error "gText_Rom_5F2BD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BD7) < 0xd
	.space 0xd - (. - gText_Rom_5F2BD7)
	.endif
