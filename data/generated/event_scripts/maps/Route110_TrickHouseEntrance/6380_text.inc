	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:763 Route110_TrickHousePuzzle_Text_MemorizedSecretCode
	.globl gText_Rom_23D65A
gText_Rom_23D65A: @ 0x0823D65A
	.string "{PLAYER}は まきものに かいてある\nあいことばを おぼえた!"
	.byte EOS
	.if (. - gText_Rom_23D65A) > 0x1d
	.error "gText_Rom_23D65A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D65A) < 0x1d
	.space 0x1d - (. - gText_Rom_23D65A)
	.endif
