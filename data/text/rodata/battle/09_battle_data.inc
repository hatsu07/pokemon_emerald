	@ src/battle_debug.c:431 battle_debug_line_431 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1D84
gText_Rom_2C1D84: @ 0x082C1D84
	.string "ダブルバトル$"
	.if (. - gText_Rom_2C1D84) != 0x7
	.error "gText_Rom_2C1D84 must retain its original byte length"
	.endif
	.globl gText_Rom_2C1D87
	.set gText_Rom_2C1D87, gText_Rom_2C1D84 + 0x3
	.incbin "baserom.gba", 0x2c1d8b, 0x1

