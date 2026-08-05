	@ src/strings.c:799 gText_BattleDomeTacticsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB2B
gText_Rom_5CCB2B: @ 0x085CCB2B
	.string "バトルドーム タクティクスシンボル$"
	.if (. - gText_Rom_5CCB2B) != 0x12
	.error "gText_Rom_5CCB2B must retain its original byte length"
	.endif
