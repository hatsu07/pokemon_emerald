	@ src/contest.c:2071 contest_line_2071
	.globl gText_Rom_5CC48C
gText_Rom_5CC48C: @ 0x085CC48C
	.string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}$"
	.if (. - gText_Rom_5CC48C) > 0x7
	.error "gText_Rom_5CC48C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC48C) < 0x7
	.space 0x7 - (. - gText_Rom_5CC48C)
	.endif
	.globl gUnknown_85CC493
gUnknown_85CC493: @ 0x085CC493

	@ src/contest.c:2078 contest_line_2078 (+1 aliases)
	.globl gText_Rom_5CC493
gText_Rom_5CC493: @ 0x085CC493
	.string "{COLOR BLUE}$"
	.if (. - gText_Rom_5CC493) > 0x4
	.error "gText_Rom_5CC493 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC493) < 0x4
	.space 0x4 - (. - gText_Rom_5CC493)
	.endif
	.globl gUnknown_85CC497
gUnknown_85CC497: @ 0x085CC497

	@ asm/contest.s:6814 Contest_CopyStringWithColor
	@ Preserve exact byte length: internal label, semantic suffix text pointer, internal terminator.
	.globl gText_Rom_5CC497
gText_Rom_5CC497: @ 0x085CC497
	.string "{HIGHLIGHT}{0x00}{COLOR}{0xFF}C,$"
	.if (. - gText_Rom_5CC497) != 0x9
	.error "gText_Rom_5CC497 must retain its original byte length"
	.endif
	.globl gUnknown_85CC49D
	.set gUnknown_85CC49D, gText_Rom_5CC497 + 0x6
	.globl gText_Rom_5CC49D
	.set gText_Rom_5CC49D, gText_Rom_5CC497 + 0x6
	.globl gUnknown_85CC4A0
gUnknown_85CC4A0: @ 0x085CC4A0

	@ asm/contest.s:16369 ContestDebugPrintBitStrings
	.globl gText_Rom_5CC4A0
gText_Rom_5CC4A0: @ 0x085CC4A0
	.string "B,$"
	.if (. - gText_Rom_5CC4A0) > 0x3
	.error "gText_Rom_5CC4A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4A0) < 0x3
	.space 0x3 - (. - gText_Rom_5CC4A0)
	.endif
	.globl gUnknown_85CC4A3
gUnknown_85CC4A3: @ 0x085CC4A3

	@ src/strings.c:710 gText_AnnouncingResults
	.globl gText_Rom_5CC4A3
gText_Rom_5CC4A3: @ 0x085CC4A3
	.string "けっか はっぴょう!$"
	.if (. - gText_Rom_5CC4A3) > 0xb
	.error "gText_Rom_5CC4A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4A3) < 0xb
	.space 0xb - (. - gText_Rom_5CC4A3)
	.endif
	.globl gUnknown_85CC4AE
gUnknown_85CC4AE: @ 0x085CC4AE

	@ src/strings.c:711 gText_PreliminaryResults
	.globl gText_Rom_5CC4AE
gText_Rom_5CC4AE: @ 0x085CC4AE
	.string "1じしんさの けっか!$"
	.if (. - gText_Rom_5CC4AE) > 0xc
	.error "gText_Rom_5CC4AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4AE) < 0xc
	.space 0xc - (. - gText_Rom_5CC4AE)
	.endif
	.globl gUnknown_85CC4BA
gUnknown_85CC4BA: @ 0x085CC4BA

	@ src/strings.c:712 gText_Round2Results
	.globl gText_Rom_5CC4BA
gText_Rom_5CC4BA: @ 0x085CC4BA
	.string "2じしんさの けっか!$"
	.if (. - gText_Rom_5CC4BA) > 0xc
	.error "gText_Rom_5CC4BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4BA) < 0xc
	.space 0xc - (. - gText_Rom_5CC4BA)
	.endif
	.globl gUnknown_85CC4C6
gUnknown_85CC4C6: @ 0x085CC4C6

	@ src/strings.c:713 gText_ContestantsMonWon
	.globl gText_Rom_5CC4C6
gText_Rom_5CC4C6: @ 0x085CC4C6
	.string "ゆうしょう! {STR_VAR_1}の {STR_VAR_2}!$"
	.if (. - gText_Rom_5CC4C6) > 0xf
	.error "gText_Rom_5CC4C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4C6) < 0xf
	.space 0xf - (. - gText_Rom_5CC4C6)
	.endif
	.globl gUnknown_85CC4D5
gUnknown_85CC4D5: @ 0x085CC4D5

	@ src/strings.c:714 gText_CommunicationStandby
	.globl gText_Rom_5CC4D5
gText_Rom_5CC4D5: @ 0x085CC4D5
	.string "つうしんたいきちゅう$"
	.if (. - gText_Rom_5CC4D5) > 0xb
	.error "gText_Rom_5CC4D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4D5) < 0xb
	.space 0xb - (. - gText_Rom_5CC4D5)
	.endif
	.globl gUnknown_85CC4E0
gUnknown_85CC4E0: @ 0x085CC4E0

	@ src/strings.c:715 gText_ColorDarkGray
	.globl gText_Rom_5CC4E0
gText_Rom_5CC4E0: @ 0x085CC4E0
	.string "{COLOR DARK_GRAY}$"
	.if (. - gText_Rom_5CC4E0) > 0x4
	.error "gText_Rom_5CC4E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4E0) < 0x4
	.space 0x4 - (. - gText_Rom_5CC4E0)
	.endif
	.globl gUnknown_85CC4E4
gUnknown_85CC4E4: @ 0x085CC4E4
	.incbin "baserom.gba", 0x5cc4e4, 0x6
	.globl gUnknown_85CC4EA
gUnknown_85CC4EA: @ 0x085CC4EA
	.incbin "baserom.gba", 0x5cc4ea, 0x4
	.globl gUnknown_85CC4EE
gUnknown_85CC4EE: @ 0x085CC4EE

