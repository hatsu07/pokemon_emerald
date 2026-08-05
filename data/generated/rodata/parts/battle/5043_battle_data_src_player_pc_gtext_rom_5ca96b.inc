	@ src/player_pc.c:232 player_pc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA96B
gText_Rom_5CA96B: @ 0x085CA96B
	.string "ポケモンに もたせる$"
	.if (. - gText_Rom_5CA96B) != 0xb
	.error "gText_Rom_5CA96B must retain its original byte length"
	.endif
