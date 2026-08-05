	@ src/data/text/match_call_messages.h:223 gText_MatchCallBirdKeeper_Robert_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3275
gText_Rom_5F3275: @ 0x085F3275
	.string "とりポケよ おれの きもち$"
	.if (. - gText_Rom_5F3275) != 0xe
	.error "gText_Rom_5F3275 must retain its original byte length"
	.endif
