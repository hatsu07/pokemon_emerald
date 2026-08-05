	@ src/data/text/match_call_messages.h:107 gText_MatchCallCamper_Ethan_Pokemon
	.globl gText_Rom_5F2D77
gText_Rom_5F2D77: @ 0x085F2D77
	.string "どんな ポケモンでも そだてる$"
	.if (. - gText_Rom_5F2D77) > 0x10
	.error "gText_Rom_5F2D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D77) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D77)
	.endif
