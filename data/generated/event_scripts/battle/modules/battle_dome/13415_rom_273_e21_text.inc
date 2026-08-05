	@ src/battle_dome.c:926 battle_dome_line_926
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E21
gText_Rom_273E21: @ 0x08273E21
	.string "こうげきと すばやさに ちからを いれている。$"
	.if (. - gText_Rom_273E21) != 0x18
	.error "gText_Rom_273E21 must retain its original byte length"
	.endif
