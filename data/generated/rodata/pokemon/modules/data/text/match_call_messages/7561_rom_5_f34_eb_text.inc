	@ src/data/text/match_call_messages.h:281 gText_MatchCallPkmnBreeder_Gabrielle_Strategy
	.globl gText_Rom_5F34EB
gText_Rom_5F34EB: @ 0x085F34EB
	.string "たいせつに そだてて いるのよ$"
	.if (. - gText_Rom_5F34EB) > 0x10
	.error "gText_Rom_5F34EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34EB) < 0x10
	.space 0x10 - (. - gText_Rom_5F34EB)
	.endif
