	@ src/strings.c:803 gText_BattlePikeLuckSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB72
gText_Rom_5CCB72: @ 0x085CCB72
	.string "バトルチューブ ラックシンボル$"
	.if (. - gText_Rom_5CCB72) != 0x10
	.error "gText_Rom_5CCB72 must retain its original byte length"
	.endif
