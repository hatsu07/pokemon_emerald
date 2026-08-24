	.globl gText_Rom_5CC49D
	.globl gText_Rom_5CC49D
	.set gText_Rom_5CC49D, gText_Rom_5CC497 + 0x6
	.globl gText_Rom_5CC4A0

	@ asm/contest.s:16369 ContestDebugPrintBitStrings
	.globl gText_Rom_5CC4A0
gText_Rom_5CC4A0: @ 0x085CC4A0
	.string "B,{EOS}"
	.if (. - gText_Rom_5CC4A0) > 0x3
	.error "gText_Rom_5CC4A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4A0) < 0x3
	.space 0x3 - (. - gText_Rom_5CC4A0)
	.endif
	.globl gText_AnnouncingResults

	@ src/strings.c:710 gText_AnnouncingResults
	.globl gText_AnnouncingResults
gText_AnnouncingResults: @ 0x085CC4A3
	.string "けっか はっぴょう!{EOS}"
	.if (. - gText_AnnouncingResults) > 0xb
	.error "gText_AnnouncingResults may not grow beyond its original slot"
	.endif
	.if (. - gText_AnnouncingResults) < 0xb
	.space 0xb - (. - gText_AnnouncingResults)
	.endif

	@ src/strings.c:711 gText_PreliminaryResults
	.globl gText_PreliminaryResults
gText_PreliminaryResults: @ 0x085CC4AE
	.string "1じしんさの けっか!{EOS}"
	.if (. - gText_PreliminaryResults) > 0xc
	.error "gText_PreliminaryResults may not grow beyond its original slot"
	.endif
	.if (. - gText_PreliminaryResults) < 0xc
	.space 0xc - (. - gText_PreliminaryResults)
	.endif

	@ src/strings.c:712 gText_Round2Results
	.globl gText_Round2Results
gText_Round2Results: @ 0x085CC4BA
	.string "2じしんさの けっか!{EOS}"
	.if (. - gText_Round2Results) > 0xc
	.error "gText_Round2Results may not grow beyond its original slot"
	.endif
	.if (. - gText_Round2Results) < 0xc
	.space 0xc - (. - gText_Round2Results)
	.endif

	@ src/strings.c:713 gText_ContestantsMonWon
	.globl gText_ContestantsMonWon
gText_ContestantsMonWon: @ 0x085CC4C6
	.string "ゆうしょう! {STR_VAR_1}の {STR_VAR_2}!{EOS}"
	.if (. - gText_ContestantsMonWon) > 0xf
	.error "gText_ContestantsMonWon may not grow beyond its original slot"
	.endif
	.if (. - gText_ContestantsMonWon) < 0xf
	.space 0xf - (. - gText_ContestantsMonWon)
	.endif

	@ src/strings.c:714 gText_CommunicationStandby
	.globl gText_CommunicationStandby
gText_CommunicationStandby: @ 0x085CC4D5
	.string "つうしんたいきちゅう{EOS}"
	.if (. - gText_CommunicationStandby) > 0xb
	.error "gText_CommunicationStandby may not grow beyond its original slot"
	.endif
	.if (. - gText_CommunicationStandby) < 0xb
	.space 0xb - (. - gText_CommunicationStandby)
	.endif

	@ src/strings.c:715 gText_ColorDarkGray
	.globl gText_ColorDarkGray
gText_ColorDarkGray: @ 0x085CC4E0
	.string "{COLOR DARK_GRAY}{EOS}"
	.if (. - gText_ColorDarkGray) > 0x4
	.error "gText_ColorDarkGray may not grow beyond its original slot"
	.endif
	.if (. - gText_ColorDarkGray) < 0x4
	.space 0x4 - (. - gText_ColorDarkGray)
	.endif
