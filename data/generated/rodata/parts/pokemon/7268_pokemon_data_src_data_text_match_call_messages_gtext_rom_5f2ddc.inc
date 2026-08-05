	@ src/data/text/match_call_messages.h:116 gText_MatchCallBugManiac_Jeffrey_Strategy (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2DDC
gText_Rom_5F2DDC: @ 0x085F2DDC
	.string "たたみかける ような こうげき$"
	.if (. - gText_Rom_5F2DDC) != 0x10
	.error "gText_Rom_5F2DDC must retain its original byte length"
	.endif
