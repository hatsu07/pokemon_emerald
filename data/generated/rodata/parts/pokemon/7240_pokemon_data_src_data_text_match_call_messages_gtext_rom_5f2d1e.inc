	@ src/data/text/match_call_messages.h:99 gText_MatchCallGuitarist_Dalton_Intro2
	.globl gText_Rom_5F2D1E
gText_Rom_5F2D1E: @ 0x085F2D1E
	.string "みんなを なかせてみたいよ$"
	.if (. - gText_Rom_5F2D1E) > 0xe
	.error "gText_Rom_5F2D1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D1E) < 0xe
	.space 0xe - (. - gText_Rom_5F2D1E)
	.endif
