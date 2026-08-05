	@ src/data/text/match_call_messages.h:207 gText_MatchCallTriathlete_Benjamin_Pokemon
	.globl gText_Rom_5F31BB
gText_Rom_5F31BB: @ 0x085F31BB
	.string "はがねの つよさを みせてやる$"
	.if (. - gText_Rom_5F31BB) > 0x10
	.error "gText_Rom_5F31BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31BB) < 0x10
	.space 0x10 - (. - gText_Rom_5F31BB)
	.endif
