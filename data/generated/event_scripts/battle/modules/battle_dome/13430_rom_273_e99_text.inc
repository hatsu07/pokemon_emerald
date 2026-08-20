	@ src/battle_dome.c:931 battle_dome_line_931
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E99
gText_Rom_273E99: @ 0x08273E99
	.string "ぼうぎょと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E99) != 0x18
	.error "gText_Rom_273E99 must retain its original byte length"
	.endif
