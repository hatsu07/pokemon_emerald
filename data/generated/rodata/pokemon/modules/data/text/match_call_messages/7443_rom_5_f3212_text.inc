	@ src/data/text/match_call_messages.h:214 gText_MatchCallTriathlete_Pablo_Intro2
	.globl gText_Rom_5F3212
gText_Rom_5F3212: @ 0x085F3212
	.string "からだも きたえよう!$"
	.if (. - gText_Rom_5F3212) > 0xc
	.error "gText_Rom_5F3212 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3212) < 0xc
	.space 0xc - (. - gText_Rom_5F3212)
	.endif
