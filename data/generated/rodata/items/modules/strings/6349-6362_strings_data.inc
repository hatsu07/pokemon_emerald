	@ src/strings.c:778 gText_Var1Percent
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA27
gText_Rom_5CCA27: @ 0x085CCA27
	.string " {STR_VAR_1}パーセント$"
	.if (. - gText_Rom_5CCA27) != 0x9
	.error "gText_Rom_5CCA27 must retain its original byte length"
	.endif
	.globl gItemDataBlock_Rom_5CCA28
	.set gItemDataBlock_Rom_5CCA28, gText_Rom_5CCA27 + 0x1

	@ src/strings.c:779 gText_PressesRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA30
gText_Rom_5CCA30: @ 0x085CCA30
	.string "おした かいすう ランキング$"
	.if (. - gText_Rom_5CCA30) != 0xf
	.error "gText_Rom_5CCA30 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA39
	.set gText_Rom_5CCA39, gText_Rom_5CCA30 + 0x9

	@ src/strings.c:780 gText_CrushingResults
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA3F
gText_Rom_5CCA3F: @ 0x085CCA3F
	.string " つぶした けっか$"
	.if (. - gText_Rom_5CCA3F) != 0xa
	.error "gText_Rom_5CCA3F must retain its original byte length"
	.endif
	.globl gItemDataBlock_Rom_5CCA40
	.set gItemDataBlock_Rom_5CCA40, gText_Rom_5CCA3F + 0x1

	@ src/strings.c:781 gText_NeatnessRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA49
gText_Rom_5CCA49: @ 0x085CCA49
	.string "   ていねいさ ランキング$"
	.if (. - gText_Rom_5CCA49) != 0xf
	.error "gText_Rom_5CCA49 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA52
	.set gText_Rom_5CCA52, gText_Rom_5CCA49 + 0x9

	@ src/strings.c:782 gText_CoopRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA58
gText_Rom_5CCA58: @ 0x085CCA58
	.string "たすけあい ランキング$"
	.if (. - gText_Rom_5CCA58) != 0xc
	.error "gText_Rom_5CCA58 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA5E
	.set gText_Rom_5CCA5E, gText_Rom_5CCA58 + 0x6

	@ src/strings.c:783 gText_PressingPowerRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA64
gText_Rom_5CCA64: @ 0x085CCA64
	.string "おすつよさ ランキング$"
	.if (. - gText_Rom_5CCA64) != 0xc
	.error "gText_Rom_5CCA64 must retain its original byte length"
	.endif
