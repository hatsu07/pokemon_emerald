	@ src/strings.c:804 gText_BattlePyramidBraveSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB82
gText_Rom_5CCB82: @ 0x085CCB82
	.string "バトルピラミッド ブレイブシンボル$"
	.if (. - gText_Rom_5CCB82) != 0x12
	.error "gText_Rom_5CCB82 must retain its original byte length"
	.endif
