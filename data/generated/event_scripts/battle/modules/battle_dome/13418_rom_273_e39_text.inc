	@ src/battle_dome.c:927 battle_dome_line_927
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E39
gText_Rom_273E39: @ 0x08273E39
	.string "こうげきと とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E39) != 0x18
	.error "gText_Rom_273E39 must retain its original byte length"
	.endif
