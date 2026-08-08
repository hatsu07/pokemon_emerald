	@ src/battle_dome.c:929 battle_dome_line_929
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E69
gText_Rom_273E69: @ 0x08273E69
	.string "ぼうぎょと すばやさに ちからを いれている。$"
	.if (. - gText_Rom_273E69) != 0x18
	.error "gText_Rom_273E69 must retain its original byte length"
	.endif
