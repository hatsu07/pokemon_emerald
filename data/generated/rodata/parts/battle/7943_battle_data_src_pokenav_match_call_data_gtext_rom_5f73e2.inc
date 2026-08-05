	@ src/pokenav_match_call_data.c:414 pokenav_match_call_data_line_414
	.globl gText_Rom_5F73E2
gText_Rom_5F73E2: @ 0x085F73E2
	.string "でんげきおやじ$"
	.if (. - gText_Rom_5F73E2) > 0x8
	.error "gText_Rom_5F73E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73E2) < 0x8
	.space 0x8 - (. - gText_Rom_5F73E2)
	.endif
