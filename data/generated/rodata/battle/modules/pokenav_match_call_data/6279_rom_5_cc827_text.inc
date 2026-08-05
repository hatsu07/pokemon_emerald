	@ src/pokenav_match_call_data.c:651 gText_MatchCallBrendan_Intro2
	.globl gText_Rom_5CC827
gText_Rom_5CC827: @ 0x085CC827
	.string "はかせに なって みせるさ!$"
	.if (. - gText_Rom_5CC827) > 0xf
	.error "gText_Rom_5CC827 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC827) < 0xf
	.space 0xf - (. - gText_Rom_5CC827)
	.endif
