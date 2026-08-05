	@ src/data/text/match_call_messages.h:58 gText_MatchCallBeauty_Thalia_Intro1
	.globl gText_Rom_5F2B6F
gText_Rom_5F2B6F: @ 0x085F2B6F
	.string "ごうか きゃくせんで$"
	.if (. - gText_Rom_5F2B6F) > 0xb
	.error "gText_Rom_5F2B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B6F) < 0xb
	.space 0xb - (. - gText_Rom_5F2B6F)
	.endif
