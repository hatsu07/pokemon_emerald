	@ src/battle_dome.c:921 battle_dome_line_921
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DB1
gText_Rom_273DB1: @ 0x08273DB1
	.string "HPと ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DB1) != 0x16
	.error "gText_Rom_273DB1 must retain its original byte length"
	.endif
