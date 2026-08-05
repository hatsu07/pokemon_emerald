	@ src/data/text/match_call_messages.h:386 gText_MatchCallChampion_Wallace_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F397B
gText_Rom_5F397B: @ 0x085F397B
	.string "つつしんで おあいて します$"
	.if (. - gText_Rom_5F397B) != 0xf
	.error "gText_Rom_5F397B must retain its original byte length"
	.endif
