	@ src/data/text/match_call_messages.h:224 gText_MatchCallBirdKeeper_Robert_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3283
gText_Rom_5F3283: @ 0x085F3283
	.string "あのこに とどけておくれ$"
	.if (. - gText_Rom_5F3283) != 0xd
	.error "gText_Rom_5F3283 must retain its original byte length"
	.endif
