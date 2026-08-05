	@ src/strings.c:802 gText_BattleFactoryKnowledgeSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB5E
gText_Rom_5CCB5E: @ 0x085CCB5E
	.string "バトルファクトリー ノウレッジシンボル$"
	.if (. - gText_Rom_5CCB5E) != 0x14
	.error "gText_Rom_5CCB5E must retain its original byte length"
	.endif
