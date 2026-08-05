	@ src/pokenav_match_call_data.c:650 gText_MatchCallBrendan_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC817
gText_Rom_5CC817: @ 0x085CC817
	.string "とうさんより すごい ポケモン$"
	.if (. - gText_Rom_5CC817) != 0x10
	.error "gText_Rom_5CC817 must retain its original byte length"
	.endif
