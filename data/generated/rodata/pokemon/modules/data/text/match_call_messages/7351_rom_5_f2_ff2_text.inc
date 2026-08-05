	@ src/data/text/match_call_messages.h:163 gText_MatchCallExpert_Timothy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2FF2
gText_Rom_5F2FF2: @ 0x085F2FF2
	.string "わかいもんには まだまだ$"
	.if (. - gText_Rom_5F2FF2) != 0xd
	.error "gText_Rom_5F2FF2 must retain its original byte length"
	.endif
