	@ src/data/text/match_call_messages.h:331 gText_MatchCallTheBigHit_Brawly_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F370B
gText_Rom_5F370B: @ 0x085F370B
	.string "ちょくせつ だげきが とくい$"
	.if (. - gText_Rom_5F370B) != 0xf
	.error "gText_Rom_5F370B must retain its original byte length"
	.endif
