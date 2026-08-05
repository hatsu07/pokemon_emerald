	@ src/pokenav_match_call_data.c:336 pokenav_match_call_data_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73B1
gText_Rom_5F73B1: @ 0x085F73B1
	.string "ポケモンがだいすき$"
	.if (. - gText_Rom_5F73B1) != 0xa
	.error "gText_Rom_5F73B1 must retain its original byte length"
	.endif
