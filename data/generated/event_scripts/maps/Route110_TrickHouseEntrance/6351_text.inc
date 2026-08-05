	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:721 Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion
	.globl gText_Rom_23D397
gText_Rom_23D397: @ 0x0823D397
	.string "む むむ…!\pなぜ わがはいが ざぶとんの したに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D397) > 0x2f
	.error "gText_Rom_23D397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D397) < 0x2f
	.space 0x2f - (. - gText_Rom_23D397)
	.endif
