	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:700 Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk
	.globl gText_Rom_23D255
gText_Rom_23D255: @ 0x0823D255
	.string "む むむ…!\pなぜ わがはいが つくえの したに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D255) > 0x2e
	.error "gText_Rom_23D255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D255) < 0x2e
	.space 0x2e - (. - gText_Rom_23D255)
	.endif
