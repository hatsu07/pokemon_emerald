
	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BerryCrush2
gText_BerryCrush2: @ 0x085CCA70
	.string "きのみクラッシュ{EOS}"
	.if (. - gText_BerryCrush2) != 0x9
	.error "gText_BerryCrush2 must retain its original byte length"
	.endif
	@ src/strings.c:785 gText_PressingSpeedRankings
	@ Preserve exact byte length: internal label.
	.globl gText_PressingSpeedRankings
gText_PressingSpeedRankings: @ 0x085CCA79
	.string "   おすはやさ ランキング!{EOS}"
	.if (. - gText_PressingSpeedRankings) != 0x10
	.error "gText_PressingSpeedRankings must retain its original byte length"
	.endif

	@ src/strings.c:786 gText_Var1Players
	@ Preserve exact byte length: internal label.
	.globl gText_Var1Players
gText_Var1Players: @ 0x085CCA89
	.string "   {STR_VAR_1}にんよう{EOS}"
	.if (. - gText_Var1Players) != 0xa
	.error "gText_Var1Players must retain its original byte length"
	.endif

	@ src/strings.c:787 gText_SymbolsEarned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SymbolsEarned
gText_SymbolsEarned: @ 0x085CCA93
	.string "てにいれた シンボル{EOS}"
	.if (. - gText_SymbolsEarned) != 0xb
	.error "gText_SymbolsEarned must retain its original byte length"
	.endif

	@ src/strings.c:788 gText_BattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BattleRecord
gText_BattleRecord: @ 0x085CCA9E
	.string "たいせんの きろく{EOS}"
	.if (. - gText_BattleRecord) != 0xa
	.error "gText_BattleRecord must retain its original byte length"
	.endif
