	@ src/strings.c:785 gText_PressingSpeedRankings
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA79
gText_Rom_5CCA79: @ 0x085CCA79
	.string "   おすはやさ ランキング!$"
	.if (. - gText_Rom_5CCA79) != 0x10
	.error "gText_Rom_5CCA79 must retain its original byte length"
	.endif
	.globl gUnknown_85CCA7C
	.set gUnknown_85CCA7C, gText_Rom_5CCA79 + 0x3

	@ src/strings.c:786 gText_Var1Players
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA89
gText_Rom_5CCA89: @ 0x085CCA89
	.string "   {STR_VAR_1}にんよう$"
	.if (. - gText_Rom_5CCA89) != 0xa
	.error "gText_Rom_5CCA89 must retain its original byte length"
	.endif
	.globl gUnknown_85CCA8C
	.set gUnknown_85CCA8C, gText_Rom_5CCA89 + 0x3
	.globl gUnknown_85CCA93
gUnknown_85CCA93: @ 0x085CCA93

	@ src/strings.c:787 gText_SymbolsEarned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA93
gText_Rom_5CCA93: @ 0x085CCA93
	.string "てにいれた シンボル$"
	.if (. - gText_Rom_5CCA93) != 0xb
	.error "gText_Rom_5CCA93 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA99
	.set gText_Rom_5CCA99, gText_Rom_5CCA93 + 0x6
	.globl gUnknown_85CCA9E
gUnknown_85CCA9E: @ 0x085CCA9E

	@ src/strings.c:788 gText_BattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA9E
gText_Rom_5CCA9E: @ 0x085CCA9E
	.string "たいせんの きろく$"
	.if (. - gText_Rom_5CCA9E) != 0xa
	.error "gText_Rom_5CCA9E must retain its original byte length"
	.endif
