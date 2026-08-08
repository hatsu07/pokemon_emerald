	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:706 Route110_TrickHouseEntrance_Text_ConcealedInDresser
	.globl gText_Rom_23D2B0
gText_Rom_23D2B0: @ 0x0823D2B0
	.string "む むむ…!\pなぜ わがはいが タンスの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D2B0) > 0x2e
	.error "gText_Rom_23D2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D2B0) < 0x2e
	.space 0x2e - (. - gText_Rom_23D2B0)
	.endif
