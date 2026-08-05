	@ src/data/text/match_call_messages.h:377 gText_MatchCallEliteFour_Glacia_Pokemon
	.globl gText_Rom_5F3910
gText_Rom_5F3910: @ 0x085F3910
	.string "ひょうてんかの じょうねつ!$"
	.if (. - gText_Rom_5F3910) > 0xf
	.error "gText_Rom_5F3910 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3910) < 0xf
	.space 0xf - (. - gText_Rom_5F3910)
	.endif
