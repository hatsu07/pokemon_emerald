	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:919 Route110_TrickHousePuzzle5_Text_Wahahahaha
	.globl gText_Rom_23F9A5
gText_Rom_23F9A5: @ 0x0823F9A5
	.string "ワハハハハ! ワハハハハ! カタカタ!$"
	.if (. - gText_Rom_23F9A5) > 0x14
	.error "gText_Rom_23F9A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9A5) < 0x14
	.space 0x14 - (. - gText_Rom_23F9A5)
	.endif
