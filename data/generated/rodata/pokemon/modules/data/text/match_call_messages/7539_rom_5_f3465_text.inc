	@ src/data/text/match_call_messages.h:268 gText_MatchCallCollector_Edwin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3465
gText_Rom_5F3465: @ 0x085F3465
	.string "せかいじゅうの めずらしい$"
	.if (. - gText_Rom_5F3465) != 0xe
	.error "gText_Rom_5F3465 must retain its original byte length"
	.endif
