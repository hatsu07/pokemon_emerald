	@ src/pokenav_match_call_data.c:260 pokenav_match_call_data_line_260
	.globl gText_Rom_5F738A
gText_Rom_5F738A: @ 0x085F738A
	.string "いしがかたいひと$"
	.if (. - gText_Rom_5F738A) > 0x9
	.error "gText_Rom_5F738A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F738A) < 0x9
	.space 0x9 - (. - gText_Rom_5F738A)
	.endif

