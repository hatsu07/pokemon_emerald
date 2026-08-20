	@ src/strings.c:820 gText_Powder
	.globl gText_Rom_5CCCEE
gText_Rom_5CCCEE: @ 0x085CCCEE
	.string "きのみのこな{EOS}"
	.if (. - gText_Rom_5CCCEE) > 0x7
	.error "gText_Rom_5CCCEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCEE) < 0x7
	.space 0x7 - (. - gText_Rom_5CCCEE)
	.endif

	@ src/strings.c:821 gText_BerryPickingRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCCF5
gText_Rom_5CCCF5: @ 0x085CCCF5
	.string "ドードリオのきのみどりの きろく{EOS}"
	.if (. - gText_Rom_5CCCF5) != 0x11
	.error "gText_Rom_5CCCF5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCD02
	.set gText_Rom_5CCD02, gText_Rom_5CCCF5 + 0xd

	@ src/strings.c:822 gText_BerriesPicked
	.globl gText_Rom_5CCD06
gText_Rom_5CCD06: @ 0x085CCD06
	.string "きのみをとった かいすう{EOS}"
	.if (. - gText_Rom_5CCD06) > 0xd
	.error "gText_Rom_5CCD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD06) < 0xd
	.space 0xd - (. - gText_Rom_5CCD06)
	.endif

	@ src/strings.c:823 gText_BestScore (+1 aliases)
	.globl gText_Rom_5CCD13
gText_Rom_5CCD13: @ 0x085CCD13
	.string "さいこう とくてん{EOS}"
	.if (. - gText_Rom_5CCD13) > 0xa
	.error "gText_Rom_5CCD13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD13) < 0xa
	.space 0xa - (. - gText_Rom_5CCD13)
	.endif

	@ src/strings.c:824 gText_BerriesInRowFivePlayers
	.globl gText_Rom_5CCD1D
gText_Rom_5CCD1D: @ 0x085CCD1D
	.string "5にんで きのみを\nつづけてとった かいすう{EOS}"
	.if (. - gText_Rom_5CCD1D) > 0x17
	.error "gText_Rom_5CCD1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD1D) < 0x17
	.space 0x17 - (. - gText_Rom_5CCD1D)
	.endif

	@ src/strings.c:825 gText_BerryPickingResults
	.globl gText_Rom_5CCD34
gText_Rom_5CCD34: @ 0x085CCD34
	.string "きのみの けっか はっぴょう!!{EOS}"
	.if (. - gText_Rom_5CCD34) > 0x11
	.error "gText_Rom_5CCD34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD34) < 0x11
	.space 0x11 - (. - gText_Rom_5CCD34)
	.endif
