	@ src/pokenav_match_call_data.c:397 pokenav_match_call_data_line_397
	.globl gText_Rom_5F73D9
gText_Rom_5F73D9: @ 0x085F73D9
	.string "ビッグなウェーブ$"
	.if (. - gText_Rom_5F73D9) > 0x9
	.error "gText_Rom_5F73D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73D9) < 0x9
	.space 0x9 - (. - gText_Rom_5F73D9)
	.endif
