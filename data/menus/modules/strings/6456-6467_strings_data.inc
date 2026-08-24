	@ src/strings.c:820 gText_Powder
	.globl gText_Powder
gText_Powder: @ 0x085CCCEE
	.string "きのみのこな{EOS}"
	.if (. - gText_Powder) > 0x7
	.error "gText_Powder may not grow beyond its original slot"
	.endif
	.if (. - gText_Powder) < 0x7
	.space 0x7 - (. - gText_Powder)
	.endif

	@ src/strings.c:821 gText_BerryPickingRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BerryPickingRecords
gText_BerryPickingRecords: @ 0x085CCCF5
	.string "ドードリオのきのみどりの きろく{EOS}"
	.if (. - gText_BerryPickingRecords) != 0x11
	.error "gText_BerryPickingRecords must retain its original byte length"
	.endif
	.globl gText_Rom_5CCD02
	.set gText_Rom_5CCD02, gText_BerryPickingRecords + 0xd

	@ src/strings.c:822 gText_BerriesPicked
	.globl gText_BerriesPicked
gText_BerriesPicked: @ 0x085CCD06
	.string "きのみをとった かいすう{EOS}"
	.if (. - gText_BerriesPicked) > 0xd
	.error "gText_BerriesPicked may not grow beyond its original slot"
	.endif
	.if (. - gText_BerriesPicked) < 0xd
	.space 0xd - (. - gText_BerriesPicked)
	.endif

	@ src/strings.c:823 gText_BestScore (+1 aliases)
	.globl gText_BestScore
gText_BestScore: @ 0x085CCD13
	.string "さいこう とくてん{EOS}"
	.if (. - gText_BestScore) > 0xa
	.error "gText_BestScore may not grow beyond its original slot"
	.endif
	.if (. - gText_BestScore) < 0xa
	.space 0xa - (. - gText_BestScore)
	.endif

	@ src/strings.c:824 gText_BerriesInRowFivePlayers
	.globl gText_BerriesInRowFivePlayers
gText_BerriesInRowFivePlayers: @ 0x085CCD1D
	.string "5にんで きのみを\nつづけてとった かいすう{EOS}"
	.if (. - gText_BerriesInRowFivePlayers) > 0x17
	.error "gText_BerriesInRowFivePlayers may not grow beyond its original slot"
	.endif
	.if (. - gText_BerriesInRowFivePlayers) < 0x17
	.space 0x17 - (. - gText_BerriesInRowFivePlayers)
	.endif

	@ src/strings.c:825 gText_BerryPickingResults
	.globl gText_BerryPickingResults
gText_BerryPickingResults: @ 0x085CCD34
	.string "きのみの けっか はっぴょう!!{EOS}"
	.if (. - gText_BerryPickingResults) > 0x11
	.error "gText_BerryPickingResults may not grow beyond its original slot"
	.endif
	.if (. - gText_BerryPickingResults) < 0x11
	.space 0x11 - (. - gText_BerryPickingResults)
	.endif
