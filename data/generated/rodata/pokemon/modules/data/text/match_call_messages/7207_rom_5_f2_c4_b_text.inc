	@ src/data/text/match_call_messages.h:79 gText_MatchCallSwimmer_Tony_Intro2
	.globl gText_Rom_5F2C4B
gText_Rom_5F2C4B: @ 0x085F2C4B
	.string "きんトレ やってるぜ!$"
	.if (. - gText_Rom_5F2C4B) > 0xc
	.error "gText_Rom_5F2C4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C4B) < 0xc
	.space 0xc - (. - gText_Rom_5F2C4B)
	.endif
