	@ src/strings.c:805 gText_ThereIsNoBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB94
gText_Rom_5CCB94: @ 0x085CCB94
	.string "げんざい たいせんきろくは ありません$"
	.if (. - gText_Rom_5CCB94) != 0x14
	.error "gText_Rom_5CCB94 must retain its original byte length"
	.endif
