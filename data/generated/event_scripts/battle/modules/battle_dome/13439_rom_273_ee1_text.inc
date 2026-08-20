	@ src/battle_dome.c:934 battle_dome_line_934
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EE1
gText_Rom_273EE1: @ 0x08273EE1
	.string "とくこうと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273EE1) != 0x18
	.error "gText_Rom_273EE1 must retain its original byte length"
	.endif
