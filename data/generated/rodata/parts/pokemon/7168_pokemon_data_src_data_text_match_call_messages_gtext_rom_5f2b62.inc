	@ src/data/text/match_call_messages.h:57 gText_MatchCallBeauty_Thalia_Pokemon
	.globl gText_Rom_5F2B62
gText_Rom_5F2B62: @ 0x085F2B62
	.string "おとなの みずタイプよ!$"
	.if (. - gText_Rom_5F2B62) > 0xd
	.error "gText_Rom_5F2B62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B62) < 0xd
	.space 0xd - (. - gText_Rom_5F2B62)
	.endif
