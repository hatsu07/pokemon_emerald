	@ src/data/text/match_call_messages.h:326 gText_MatchCallRockinWhiz_Roxanne_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F36D1
gText_Rom_5F36D1: @ 0x085F36D1
	.string "いわタイプ パワーで こうげき$"
	.if (. - gText_Rom_5F36D1) != 0x10
	.error "gText_Rom_5F36D1 must retain its original byte length"
	.endif
