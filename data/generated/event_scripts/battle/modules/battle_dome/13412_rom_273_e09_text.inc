	@ src/battle_dome.c:925 battle_dome_line_925
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E09
gText_Rom_273E09: @ 0x08273E09
	.string "こうげきと ぼうぎょに ちからを いれている。$"
	.if (. - gText_Rom_273E09) != 0x18
	.error "gText_Rom_273E09 must retain its original byte length"
	.endif
