	@ src/pokenav_match_call_data.c:645 gText_MatchCallSteven_Strategy
	.globl gText_Rom_5CC79E
gText_Rom_5CC79E: @ 0x085CC79E
	.string "あいての じゃくてんを つく!$"
	.if (. - gText_Rom_5CC79E) > 0x10
	.error "gText_Rom_5CC79E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC79E) < 0x10
	.space 0x10 - (. - gText_Rom_5CC79E)
	.endif
