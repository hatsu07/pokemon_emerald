	@ src/data/text/match_call_messages.h:31 gText_MatchCallCooltrainer_Cristin_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A42
gText_Rom_5F2A42: @ 0x085F2A42
	.string "おおわざで しとめるわよ!$"
	.if (. - gText_Rom_5F2A42) != 0xe
	.error "gText_Rom_5F2A42 must retain its original byte length"
	.endif
