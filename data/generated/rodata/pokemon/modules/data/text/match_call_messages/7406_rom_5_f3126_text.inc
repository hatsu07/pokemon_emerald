	@ src/data/text/match_call_messages.h:193 gText_MatchCallTriathlete_Abigail_Intro1
	.globl gText_Rom_5F3126
gText_Rom_5F3126: @ 0x085F3126
	.string "ダイエットの つもりだったのに$"
	.if (. - gText_Rom_5F3126) > 0x10
	.error "gText_Rom_5F3126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3126) < 0x10
	.space 0x10 - (. - gText_Rom_5F3126)
	.endif
