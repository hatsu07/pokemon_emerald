	@ src/pokenav_match_call_data.c:677 pokenav_match_call_data_line_677
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7DB
gText_Rom_5CC7DB: @ 0x085CC7DB
	.string "けっきょく ボクが いちばん$"
	.if (. - gText_Rom_5CC7DB) != 0xf
	.error "gText_Rom_5CC7DB must retain its original byte length"
	.endif
