	@ src/data/text/match_call_messages.h:69 gText_MatchCallRichBoy_Winston_Intro2
	.globl gText_Rom_5F2BE4
gText_Rom_5F2BE4: @ 0x085F2BE4
	.string "ポケモン ベッドで ねてるのさ$"
	.if (. - gText_Rom_5F2BE4) > 0x10
	.error "gText_Rom_5F2BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BE4) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BE4)
	.endif
