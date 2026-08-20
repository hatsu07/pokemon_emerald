	@ src/battle_dome.c:923 battle_dome_line_923
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DDD
gText_Rom_273DDD: @ 0x08273DDD
	.string "HPと とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DDD) != 0x16
	.error "gText_Rom_273DDD must retain its original byte length"
	.endif
