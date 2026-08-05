	@ src/battle_dome.c:920 battle_dome_line_920
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273D9B
gText_Rom_273D9B: @ 0x08273D9B
	.string "HPと こうげきに ちからを いれている。$"
	.if (. - gText_Rom_273D9B) != 0x16
	.error "gText_Rom_273D9B must retain its original byte length"
	.endif
