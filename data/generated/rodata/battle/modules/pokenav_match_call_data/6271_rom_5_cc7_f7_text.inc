	@ src/pokenav_match_call_data.c:648 gText_MatchCallBrendan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7F7
gText_Rom_5CC7F7: @ 0x085CC7F7
	.string "ポケモンの ちしきで しょうぶ$"
	.if (. - gText_Rom_5CC7F7) != 0x10
	.error "gText_Rom_5CC7F7 must retain its original byte length"
	.endif
