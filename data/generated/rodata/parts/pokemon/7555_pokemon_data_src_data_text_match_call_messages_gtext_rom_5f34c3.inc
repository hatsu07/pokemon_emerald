	@ src/data/text/match_call_messages.h:277 gText_MatchCallPkmnBreeder_Isaac_Pokemon
	.globl gText_Rom_5F34C3
gText_Rom_5F34C3: @ 0x085F34C3
	.string "なんでも そだてる$"
	.if (. - gText_Rom_5F34C3) > 0xa
	.error "gText_Rom_5F34C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34C3) < 0xa
	.space 0xa - (. - gText_Rom_5F34C3)
	.endif
