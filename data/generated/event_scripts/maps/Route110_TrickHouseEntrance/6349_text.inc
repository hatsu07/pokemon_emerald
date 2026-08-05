	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:718 Route110_TrickHouseEntrance_Text_ConcealedBehindWindow
	.globl gText_Rom_23D36A
gText_Rom_23D36A: @ 0x0823D36A
	.string "む むむ…!\pなぜ わがはいが まどの うらに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D36A) > 0x2d
	.error "gText_Rom_23D36A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D36A) < 0x2d
	.space 0x2d - (. - gText_Rom_23D36A)
	.endif
