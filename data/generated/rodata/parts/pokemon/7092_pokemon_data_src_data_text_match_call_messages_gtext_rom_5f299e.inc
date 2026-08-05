	@ src/data/text/match_call_messages.h:16 gText_MatchCallTuber_Lola_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F299E
gText_Rom_5F299E: @ 0x085F299E
	.string "がんばりまーす!$"
	.if (. - gText_Rom_5F299E) != 0x9
	.error "gText_Rom_5F299E must retain its original byte length"
	.endif
