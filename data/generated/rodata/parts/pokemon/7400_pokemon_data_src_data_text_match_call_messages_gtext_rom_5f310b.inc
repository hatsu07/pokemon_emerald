	@ src/data/text/match_call_messages.h:191 gText_MatchCallTriathlete_Abigail_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F310B
gText_Rom_5F310B: @ 0x085F310B
	.string "ぼうぎょを だいじに$"
	.if (. - gText_Rom_5F310B) != 0xb
	.error "gText_Rom_5F310B must retain its original byte length"
	.endif
