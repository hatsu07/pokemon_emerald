	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:703 Route110_TrickHouseEntrance_Text_ConcealedBehindTree
	.globl gText_Rom_23D283
gText_Rom_23D283: @ 0x0823D283
	.string "む むむ…!\pなぜ わがはいが きの うしろに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D283) > 0x2d
	.error "gText_Rom_23D283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D283) < 0x2d
	.space 0x2d - (. - gText_Rom_23D283)
	.endif
