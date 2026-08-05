	@ src/pokenav_match_call_data.c:646 gText_MatchCallSteven_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC7AE
gText_Rom_5CC7AE: @ 0x085CC7AE
	.string "さいきょうの はがねポケモン$"
	.if (. - gText_Rom_5CC7AE) != 0xf
	.error "gText_Rom_5CC7AE must retain its original byte length"
	.endif
