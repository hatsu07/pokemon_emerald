	@ src/data/text/match_call_messages.h:33 gText_MatchCallCooltrainer_Cristin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A60
gText_Rom_5F2A60: @ 0x085F2A60
	.string "さいきょうの ポケモン$"
	.if (. - gText_Rom_5F2A60) != 0xc
	.error "gText_Rom_5F2A60 must retain its original byte length"
	.endif
