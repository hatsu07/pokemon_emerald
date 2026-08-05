	@ src/data/text/match_call_messages.h:149 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2F52
gText_Rom_5F2F52: @ 0x085F2F52
	.string "センパイと コウハイでーす!$"
	.if (. - gText_Rom_5F2F52) != 0xf
	.error "gText_Rom_5F2F52 must retain its original byte length"
	.endif
