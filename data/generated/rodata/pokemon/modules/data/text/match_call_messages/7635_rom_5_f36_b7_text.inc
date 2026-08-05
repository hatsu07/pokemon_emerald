	@ src/data/text/match_call_messages.h:323 gText_MatchCallPkmnTrainer_Wally_Intro1
	.globl gText_Rom_5F36B7
gText_Rom_5F36B7: @ 0x085F36B7
	.string "ぼくと ポケモンは$"
	.if (. - gText_Rom_5F36B7) > 0xa
	.error "gText_Rom_5F36B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36B7) < 0xa
	.space 0xa - (. - gText_Rom_5F36B7)
	.endif
