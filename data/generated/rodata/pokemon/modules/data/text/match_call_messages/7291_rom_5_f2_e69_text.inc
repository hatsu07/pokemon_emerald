	@ src/data/text/match_call_messages.h:128 gText_MatchCallPsychic_Jacki_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2E69
gText_Rom_5F2E69: @ 0x085F2E69
	.string "ほんと いうと わたし$"
	.if (. - gText_Rom_5F2E69) != 0xc
	.error "gText_Rom_5F2E69 must retain its original byte length"
	.endif
