	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F356D
gText_Rom_5F356D: @ 0x085F356D
	.string "いろんな タイプで しょうぶ$"
	.if (. - gText_Rom_5F356D) != 0xf
	.error "gText_Rom_5F356D must retain its original byte length"
	.endif
