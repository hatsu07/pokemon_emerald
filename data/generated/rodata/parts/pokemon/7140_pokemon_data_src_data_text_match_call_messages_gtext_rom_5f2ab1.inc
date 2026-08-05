	@ src/data/text/match_call_messages.h:41 gText_MatchCallCooltrainer_Wilton_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AB1
gText_Rom_5F2AB1: @ 0x085F2AB1
	.string "あいてが いやがる たたかい$"
	.if (. - gText_Rom_5F2AB1) != 0xf
	.error "gText_Rom_5F2AB1 must retain its original byte length"
	.endif
