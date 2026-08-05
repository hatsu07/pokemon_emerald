	@ src/data/text/match_call_messages.h:133 gText_MatchCallGentleman_Walter_Intro1
	.globl gText_Rom_5F2E9B
gText_Rom_5F2E9B: @ 0x085F2E9B
	.string "がいこくの おみやげで$"
	.if (. - gText_Rom_5F2E9B) > 0xc
	.error "gText_Rom_5F2E9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E9B) < 0xc
	.space 0xc - (. - gText_Rom_5F2E9B)
	.endif
