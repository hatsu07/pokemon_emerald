	@ src/data/text/match_call_messages.h:132 gText_MatchCallGentleman_Walter_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2E8D
gText_Rom_5F2E8D: @ 0x085F2E8D
	.string "きひん あふれる ポケモン$"
	.if (. - gText_Rom_5F2E8D) != 0xe
	.error "gText_Rom_5F2E8D must retain its original byte length"
	.endif
