	@ src/data/text/match_call_messages.h:161 gText_MatchCallExpert_Timothy_Strategy
	.globl gText_Rom_5F2FD2
gText_Rom_5F2FD2: @ 0x085F2FD2
	.string "おぬしの こうげきは みきった$"
	.if (. - gText_Rom_5F2FD2) > 0x10
	.error "gText_Rom_5F2FD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FD2) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FD2)
	.endif
