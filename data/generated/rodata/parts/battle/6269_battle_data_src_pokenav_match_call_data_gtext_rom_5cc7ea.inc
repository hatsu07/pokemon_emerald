	@ src/pokenav_match_call_data.c:678 pokenav_match_call_data_line_678
	.globl gText_Rom_5CC7EA
gText_Rom_5CC7EA: @ 0x085CC7EA
	.string "つよくて すごいんだよね$"
	.if (. - gText_Rom_5CC7EA) > 0xd
	.error "gText_Rom_5CC7EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC7EA) < 0xd
	.space 0xd - (. - gText_Rom_5CC7EA)
	.endif
