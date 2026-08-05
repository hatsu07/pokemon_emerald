	@ src/player_pc.c:183 player_pc_line_183
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8EC
gText_Rom_5CA8EC: @ 0x085CA8EC
	.string "パソコン から\nどうぐを ひきだします$"
	.if (. - gText_Rom_5CA8EC) != 0x14
	.error "gText_Rom_5CA8EC must retain its original byte length"
	.endif
