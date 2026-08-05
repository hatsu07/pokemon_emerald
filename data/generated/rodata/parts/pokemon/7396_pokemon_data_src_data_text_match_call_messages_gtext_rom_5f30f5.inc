	@ src/data/text/match_call_messages.h:188 gText_MatchCallTriathlete_Maria_Intro1
	.globl gText_Rom_5F30F5
gText_Rom_5F30F5: @ 0x085F30F5
	.string "マラソンは じぶんとの$"
	.if (. - gText_Rom_5F30F5) > 0xc
	.error "gText_Rom_5F30F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30F5) < 0xc
	.space 0xc - (. - gText_Rom_5F30F5)
	.endif
