	@ src/data/text/match_call_messages.h:242 gText_MatchCallSwimmer_Jenny_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F333C
gText_Rom_5F333C: @ 0x085F333C
	.string "かわいい みずポケモン$"
	.if (. - gText_Rom_5F333C) != 0xc
	.error "gText_Rom_5F333C must retain its original byte length"
	.endif
