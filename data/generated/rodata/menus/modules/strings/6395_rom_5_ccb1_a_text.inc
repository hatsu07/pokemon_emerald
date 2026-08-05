	@ src/strings.c:798 gText_BattleTowerAbilitySymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB1A
gText_Rom_5CCB1A: @ 0x085CCB1A
	.string "バトルタワー アビリティシンボル$"
	.if (. - gText_Rom_5CCB1A) != 0x11
	.error "gText_Rom_5CCB1A must retain its original byte length"
	.endif
