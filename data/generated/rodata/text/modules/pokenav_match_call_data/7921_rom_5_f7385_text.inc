	@ src/pokenav_match_call_data.c:185 pokenav_match_call_data_line_185
	.globl gText_Rom_5F7385
gText_Rom_5F7385: @ 0x085F7385
	.string "ツワブキ$"
	.if (. - gText_Rom_5F7385) > 0x5
	.error "gText_Rom_5F7385 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7385) < 0x5
	.space 0x5 - (. - gText_Rom_5F7385)
	.endif
