	@ src/pokenav_match_call_data.c:431 pokenav_match_call_data_line_431
	.globl gText_Rom_5F73EA
gText_Rom_5F73EA: @ 0x085F73EA
	.string "じょうねつのひと$"
	.if (. - gText_Rom_5F73EA) > 0x9
	.error "gText_Rom_5F73EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73EA) < 0x9
	.space 0x9 - (. - gText_Rom_5F73EA)
	.endif
