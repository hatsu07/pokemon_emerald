	@ src/data/text/match_call_messages.h:162 gText_MatchCallExpert_Timothy_Pokemon
	.globl gText_Rom_5F2FE2
gText_Rom_5F2FE2: @ 0x085F2FE2
	.string "かくとうの おうぎを みよ! $"
	.if (. - gText_Rom_5F2FE2) > 0x10
	.error "gText_Rom_5F2FE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FE2) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FE2)
	.endif
