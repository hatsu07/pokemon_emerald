	@ src/data/text/match_call_messages.h:183 gText_MatchCallTriathlete_Isaiah_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F30C1
gText_Rom_5F30C1: @ 0x085F30C1
	.string "みずあそび している$"
	.if (. - gText_Rom_5F30C1) != 0xb
	.error "gText_Rom_5F30C1 must retain its original byte length"
	.endif
