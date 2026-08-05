	@ src/battle_dome.c:932 battle_dome_line_932
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EB1
gText_Rom_273EB1: @ 0x08273EB1
	.string "すばやさと とくこうに ちからを いれている。$"
	.if (. - gText_Rom_273EB1) != 0x18
	.error "gText_Rom_273EB1 must retain its original byte length"
	.endif
