	@ src/data/text/match_call_messages.h:39 gText_MatchCallCooltrainer_Brooke_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AA7
gText_Rom_5F2AA7: @ 0x085F2AA7
	.string "あきらめないわよ!$"
	.if (. - gText_Rom_5F2AA7) != 0xa
	.error "gText_Rom_5F2AA7 must retain its original byte length"
	.endif
