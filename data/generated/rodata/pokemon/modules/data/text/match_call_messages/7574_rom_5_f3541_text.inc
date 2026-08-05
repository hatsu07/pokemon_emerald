	@ src/data/text/match_call_messages.h:288 gText_MatchCallPkmnRanger_Catherine_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3541
gText_Rom_5F3541: @ 0x085F3541
	.string "ポケモンと いっしょに$"
	.if (. - gText_Rom_5F3541) != 0xc
	.error "gText_Rom_5F3541 must retain its original byte length"
	.endif
