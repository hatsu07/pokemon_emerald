	@ src/pokenav_match_call_data.c:184 pokenav_match_call_data_line_184
	.globl gText_Rom_5F737C
gText_Rom_5F737C: @ 0x085F737C
	.string "デボンしゃちょう$"
	.if (. - gText_Rom_5F737C) > 0x9
	.error "gText_Rom_5F737C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F737C) < 0x9
	.space 0x9 - (. - gText_Rom_5F737C)
	.endif
