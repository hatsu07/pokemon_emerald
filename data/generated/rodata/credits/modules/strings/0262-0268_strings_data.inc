	@ src/strings.c:1092 gText_IfThrowAwayCardEventWontHappen
	.globl gText_Rom_2C2A94
gText_Rom_2C2A94: @ 0x082C2A94
	.string "カードをすてると できごとも\nなくなりますが よいですか?$"
	.if (. - gText_Rom_2C2A94) > 0x1e
	.error "gText_Rom_2C2A94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2A94) < 0x1e
	.space 0x1e - (. - gText_Rom_2C2A94)
	.endif

	@ src/strings.c:1093 gText_OkayToDiscardNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2AB2
gText_Rom_2C2AB2: @ 0x082C2AB2
	.string "  ほんとうに ニュースを\nすてても よいですか?$"
	.if (. - gText_Rom_2C2AB2) != 0x1a
	.error "gText_Rom_2C2AB2 must retain its original byte length"
	.endif
	.globl gUnknown_82C2AB4
	.set gUnknown_82C2AB4, gText_Rom_2C2AB2 + 0x2
	.globl gUnknown_82C2ACC
gUnknown_82C2ACC: @ 0x082C2ACC

	@ src/strings.c:1094 gText_HaventReceivedGiftOkayToDiscard
	.globl gText_Rom_2C2ACC
gText_Rom_2C2ACC: @ 0x082C2ACC
	.string "おくりものを もらってません\nが ほんとうに すてますか?$"
	.if (. - gText_Rom_2C2ACC) > 0x1e
	.error "gText_Rom_2C2ACC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2ACC) < 0x1e
	.space 0x1e - (. - gText_Rom_2C2ACC)
	.endif

	@ src/strings.c:1095 gText_DataWillBeSaved
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C2AEA
gText_Rom_2C2AEA: @ 0x082C2AEA
	.string "  レポートを かいています\nしばらく おまちください$"
	.if (. - gText_Rom_2C2AEA) != 0x1c
	.error "gText_Rom_2C2AEA must retain its original byte length"
	.endif
