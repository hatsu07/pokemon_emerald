	@ src/pokenav_match_call_data.c:245 pokenav_match_call_data_line_245
	.globl gText_Rom_5F73A8
gText_Rom_5F73A8: @ 0x085F73A8
	.string "やさしくてきれい$"
	.if (. - gText_Rom_5F73A8) > 0x9
	.error "gText_Rom_5F73A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73A8) < 0x9
	.space 0x9 - (. - gText_Rom_5F73A8)
	.endif
