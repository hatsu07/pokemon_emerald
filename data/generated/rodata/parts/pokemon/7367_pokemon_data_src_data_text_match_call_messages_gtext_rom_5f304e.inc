	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F304E
gText_Rom_5F304E: @ 0x085F304E
	.string "いろんな タイプで しょうぶ$"
	.if (. - gText_Rom_5F304E) != 0xf
	.error "gText_Rom_5F304E must retain its original byte length"
	.endif
