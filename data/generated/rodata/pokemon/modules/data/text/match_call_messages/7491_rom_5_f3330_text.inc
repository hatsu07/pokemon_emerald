	@ src/data/text/match_call_messages.h:241 gText_MatchCallSwimmer_Jenny_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3330
gText_Rom_5F3330: @ 0x085F3330
	.string "ようしゃ しないわよ!$"
	.if (. - gText_Rom_5F3330) != 0xc
	.error "gText_Rom_5F3330 must retain its original byte length"
	.endif
