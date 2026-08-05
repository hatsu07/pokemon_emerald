	@ src/strings.c:801 gText_BattleArenaGutsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB4E
gText_Rom_5CCB4E: @ 0x085CCB4E
	.string "バトルアリーナ ガッツシンボル$"
	.if (. - gText_Rom_5CCB4E) != 0x10
	.error "gText_Rom_5CCB4E must retain its original byte length"
	.endif
