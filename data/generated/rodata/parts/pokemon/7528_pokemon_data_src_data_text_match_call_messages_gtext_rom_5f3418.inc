	@ src/data/text/match_call_messages.h:262 gText_MatchCallSailor_Cory_Pokemon
	.globl gText_Rom_5F3418
gText_Rom_5F3418: @ 0x085F3418
	.string "みずポケモンが すきだー!$"
	.if (. - gText_Rom_5F3418) > 0xe
	.error "gText_Rom_5F3418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3418) < 0xe
	.space 0xe - (. - gText_Rom_5F3418)
	.endif
