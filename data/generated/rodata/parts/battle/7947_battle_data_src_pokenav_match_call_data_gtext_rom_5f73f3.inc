	@ src/pokenav_match_call_data.c:448 pokenav_match_call_data_line_448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73F3
gText_Rom_5F73F3: @ 0x085F73F3
	.string "せかいのとりつかい$"
	.if (. - gText_Rom_5F73F3) != 0xa
	.error "gText_Rom_5F73F3 must retain its original byte length"
	.endif
