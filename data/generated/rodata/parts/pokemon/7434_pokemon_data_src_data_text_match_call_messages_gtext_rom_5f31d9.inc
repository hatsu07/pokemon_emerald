	@ src/data/text/match_call_messages.h:209 gText_MatchCallTriathlete_Benjamin_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F31D9
gText_Rom_5F31D9: @ 0x085F31D9
	.string "すいぶんを ほきゅうしよう!$"
	.if (. - gText_Rom_5F31D9) != 0xf
	.error "gText_Rom_5F31D9 must retain its original byte length"
	.endif
