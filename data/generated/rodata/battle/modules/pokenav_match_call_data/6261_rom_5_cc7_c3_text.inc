	@ src/pokenav_match_call_data.c:666 pokenav_match_call_data_line_666
	.globl gText_Rom_5CC7C3
gText_Rom_5CC7C3: @ 0x085CC7C3
	.string "いしの ためなら$"
	.if (. - gText_Rom_5CC7C3) > 0x9
	.error "gText_Rom_5CC7C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC7C3) < 0x9
	.space 0x9 - (. - gText_Rom_5CC7C3)
	.endif
