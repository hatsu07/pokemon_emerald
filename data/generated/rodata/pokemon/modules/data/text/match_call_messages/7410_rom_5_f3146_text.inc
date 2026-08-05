	@ src/data/text/match_call_messages.h:196 gText_MatchCallTriathlete_Dylan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3146
gText_Rom_5F3146: @ 0x085F3146
	.string "あいてより さきに こうげき!$"
	.if (. - gText_Rom_5F3146) != 0x10
	.error "gText_Rom_5F3146 must retain its original byte length"
	.endif
