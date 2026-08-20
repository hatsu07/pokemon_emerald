	@ src/battle_dome.c:922 battle_dome_line_922
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DC7
gText_Rom_273DC7: @ 0x08273DC7
	.string "HPと すばやさに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DC7) != 0x16
	.error "gText_Rom_273DC7 must retain its original byte length"
	.endif
