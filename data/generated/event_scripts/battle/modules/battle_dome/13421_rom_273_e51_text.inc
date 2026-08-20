	@ src/battle_dome.c:928 battle_dome_line_928
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E51
gText_Rom_273E51: @ 0x08273E51
	.string "こうげきと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E51) != 0x18
	.error "gText_Rom_273E51 must retain its original byte length"
	.endif
