	@ src/data/text/match_call_messages.h:52 gText_MatchCallLady_Cindy_Pokemon
	.globl gText_Rom_5F2B30
gText_Rom_5F2B30: @ 0x085F2B30
	.string "ゴージャスタイプよ!$"
	.if (. - gText_Rom_5F2B30) > 0xb
	.error "gText_Rom_5F2B30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B30) < 0xb
	.space 0xb - (. - gText_Rom_5F2B30)
	.endif
