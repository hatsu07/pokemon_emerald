	@ src/strings.c:800 gText_BattlePalaceSpiritsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB3D
gText_Rom_5CCB3D: @ 0x085CCB3D
	.string "バトルパレス スピリットシンボル$"
	.if (. - gText_Rom_5CCB3D) != 0x11
	.error "gText_Rom_5CCB3D must retain its original byte length"
	.endif
