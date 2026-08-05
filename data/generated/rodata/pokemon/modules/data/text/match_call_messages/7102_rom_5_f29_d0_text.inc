	@ src/data/text/match_call_messages.h:21 gText_MatchCallTuber_Ricky_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F29D0
gText_Rom_5F29D0: @ 0x085F29D0
	.string "よく わからないけど がんばる$"
	.if (. - gText_Rom_5F29D0) != 0x10
	.error "gText_Rom_5F29D0 must retain its original byte length"
	.endif
