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
