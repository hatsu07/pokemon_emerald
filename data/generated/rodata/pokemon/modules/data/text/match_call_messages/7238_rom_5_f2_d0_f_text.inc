	@ src/data/text/match_call_messages.h:98 gText_MatchCallGuitarist_Dalton_Intro1
	.globl gText_Rom_5F2D0F
gText_Rom_5F2D0F: @ 0x085F2D0F
	.string "ぼくの こころの メロディで$"
	.if (. - gText_Rom_5F2D0F) > 0xf
	.error "gText_Rom_5F2D0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D0F) < 0xf
	.space 0xf - (. - gText_Rom_5F2D0F)
	.endif
