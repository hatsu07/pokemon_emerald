	@ src/pokenav_match_call_data.c:465 pokenav_match_call_data_line_465
	.globl gText_Rom_5F73FD
gText_Rom_5F73FD: @ 0x085F73FD
	.string "しんぴてきなコンビ$"
	.if (. - gText_Rom_5F73FD) > 0xa
	.error "gText_Rom_5F73FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73FD) < 0xa
	.space 0xa - (. - gText_Rom_5F73FD)
	.endif
