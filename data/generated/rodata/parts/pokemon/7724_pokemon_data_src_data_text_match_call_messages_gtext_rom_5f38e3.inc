	@ src/data/text/match_call_messages.h:373 gText_MatchCallEliteFour_Phoebe_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38E3
gText_Rom_5F38E3: @ 0x085F38E3
	.string "おくりびやまの おばあちゃん$"
	.if (. - gText_Rom_5F38E3) != 0xf
	.error "gText_Rom_5F38E3 must retain its original byte length"
	.endif
