	@ src/data/text/match_call_messages.h:361 gText_MatchCallDandyCharm_Juan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3852
gText_Rom_5F3852: @ 0x085F3852
	.string "すばらしき みずの ちから$"
	.if (. - gText_Rom_5F3852) != 0xe
	.error "gText_Rom_5F3852 must retain its original byte length"
	.endif
