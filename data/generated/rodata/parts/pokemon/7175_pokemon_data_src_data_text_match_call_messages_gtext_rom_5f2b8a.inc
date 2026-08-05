	@ src/data/text/match_call_messages.h:61 gText_MatchCallBeauty_Jessica_Strategy
	.globl gText_Rom_5F2B8A
gText_Rom_5F2B8A: @ 0x085F2B8A
	.string "まどわせちゃうわよ$"
	.if (. - gText_Rom_5F2B8A) > 0xa
	.error "gText_Rom_5F2B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B8A) < 0xa
	.space 0xa - (. - gText_Rom_5F2B8A)
	.endif
