	@ src/battle_dome.c:933 battle_dome_line_933
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EC9
gText_Rom_273EC9: @ 0x08273EC9
	.string "すばやさと とくぼうに ちからを いれている。$"
	.if (. - gText_Rom_273EC9) != 0x18
	.error "gText_Rom_273EC9 must retain its original byte length"
	.endif
