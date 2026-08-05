	@ src/pokenav_match_call_data.c:482 pokenav_match_call_data_line_482
	.globl gText_Rom_5F7407
gText_Rom_5F7407: @ 0x085F7407
	.string "みわくのダンディ$"
	.if (. - gText_Rom_5F7407) > 0x9
	.error "gText_Rom_5F7407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7407) < 0x9
	.space 0x9 - (. - gText_Rom_5F7407)
	.endif
