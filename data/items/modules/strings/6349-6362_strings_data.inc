	@ src/strings.c:778 gText_Var1Percent
	@ Preserve exact byte length: internal label.
	.globl gText_Var1Percent
gText_Var1Percent: @ 0x085CCA27
	.string " {STR_VAR_1}パーセント{EOS}"
	.if (. - gText_Var1Percent) != 0x9
	.error "gText_Var1Percent must retain its original byte length"
	.endif

	@ src/strings.c:779 gText_PressesRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PressesRankings
gText_PressesRankings: @ 0x085CCA30
	.string "おした かいすう ランキング{EOS}"
	.if (. - gText_PressesRankings) != 0xf
	.error "gText_PressesRankings must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA39
	.set gText_Rom_5CCA39, gText_PressesRankings + 0x9

	@ src/strings.c:780 gText_CrushingResults
	@ Preserve exact byte length: internal label.
	.globl gText_CrushingResults
gText_CrushingResults: @ 0x085CCA3F
	.string " つぶした けっか{EOS}"
	.if (. - gText_CrushingResults) != 0xa
	.error "gText_CrushingResults must retain its original byte length"
	.endif

	@ src/strings.c:781 gText_NeatnessRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_NeatnessRankings
gText_NeatnessRankings: @ 0x085CCA49
	.string "   ていねいさ ランキング{EOS}"
	.if (. - gText_NeatnessRankings) != 0xf
	.error "gText_NeatnessRankings must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA52
	.set gText_Rom_5CCA52, gText_NeatnessRankings + 0x9

	@ src/strings.c:782 gText_CoopRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_CoopRankings
gText_CoopRankings: @ 0x085CCA58
	.string "たすけあい ランキング{EOS}"
	.if (. - gText_CoopRankings) != 0xc
	.error "gText_CoopRankings must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA5E
	.set gText_Rom_5CCA5E, gText_CoopRankings + 0x6

	@ src/strings.c:783 gText_PressingPowerRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PressingPowerRankings
gText_PressingPowerRankings: @ 0x085CCA64
	.string "おすつよさ ランキング{EOS}"
	.if (. - gText_PressingPowerRankings) != 0xc
	.error "gText_PressingPowerRankings must retain its original byte length"
	.endif
