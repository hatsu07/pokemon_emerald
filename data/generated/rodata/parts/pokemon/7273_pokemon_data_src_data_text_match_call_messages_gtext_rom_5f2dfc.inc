	@ src/data/text/match_call_messages.h:118 gText_MatchCallBugManiac_Jeffrey_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2DFC
gText_Rom_5F2DFC: @ 0x085F2DFC
	.string "まいにち…… もりに はいって$"
	.if (. - gText_Rom_5F2DFC) != 0x10
	.error "gText_Rom_5F2DFC must retain its original byte length"
	.endif
