	@ src/battle_dome.c:930 battle_dome_line_930
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E81
gText_Rom_273E81: @ 0x08273E81
	.string "ぼうぎょと とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E81) != 0x18
	.error "gText_Rom_273E81 must retain its original byte length"
	.endif
