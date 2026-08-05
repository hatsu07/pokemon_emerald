	@ src/data/text/match_call_messages.h:116 gText_MatchCallBugManiac_Jeffrey_Strategy (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F355D
gText_Rom_5F355D: @ 0x085F355D
	.string "たたみかける ような こうげき$"
	.if (. - gText_Rom_5F355D) != 0x10
	.error "gText_Rom_5F355D must retain its original byte length"
	.endif
