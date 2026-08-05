	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:760 Route110_TrickHousePuzzle_Text_FoundAScroll
	.globl gText_Rom_23D64A
gText_Rom_23D64A: @ 0x0823D64A
	.string "{PLAYER}は まきものを みつけた!"
	.byte EOS
	.if (. - gText_Rom_23D64A) > 0x10
	.error "gText_Rom_23D64A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D64A) < 0x10
	.space 0x10 - (. - gText_Rom_23D64A)
	.endif
