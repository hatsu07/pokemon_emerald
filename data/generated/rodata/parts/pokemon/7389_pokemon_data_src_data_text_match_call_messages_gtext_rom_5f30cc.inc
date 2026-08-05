	@ src/data/text/match_call_messages.h:184 gText_MatchCallTriathlete_Isaiah_Intro2
	.globl gText_Rom_5F30CC
gText_Rom_5F30CC: @ 0x085F30CC
	.string "かいパンやろうには まけないぜ$"
	.if (. - gText_Rom_5F30CC) > 0x10
	.error "gText_Rom_5F30CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30CC) < 0x10
	.space 0x10 - (. - gText_Rom_5F30CC)
	.endif
