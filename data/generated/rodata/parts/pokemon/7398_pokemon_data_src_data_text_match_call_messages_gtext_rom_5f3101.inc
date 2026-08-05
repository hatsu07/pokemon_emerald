	@ src/data/text/match_call_messages.h:189 gText_MatchCallTriathlete_Maria_Intro2
	.globl gText_Rom_5F3101
gText_Rom_5F3101: @ 0x085F3101
	.string "たたかい なのよ!$"
	.if (. - gText_Rom_5F3101) > 0xa
	.error "gText_Rom_5F3101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3101) < 0xa
	.space 0xa - (. - gText_Rom_5F3101)
	.endif
