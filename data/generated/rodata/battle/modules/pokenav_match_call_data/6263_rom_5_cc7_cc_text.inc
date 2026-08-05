	@ src/pokenav_match_call_data.c:667 pokenav_match_call_data_line_667
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7CC
gText_Rom_5CC7CC: @ 0x085CC7CC
	.string "たきだって のぼって いくよ$"
	.if (. - gText_Rom_5CC7CC) != 0xf
	.error "gText_Rom_5CC7CC must retain its original byte length"
	.endif
