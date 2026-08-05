	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:712 Route110_TrickHouseEntrance_Text_ConcealedInPlanter
	.globl gText_Rom_23D30C
gText_Rom_23D30C: @ 0x0823D30C
	.string "む むむ…!\pなぜ わがはいが うえきばちの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D30C) > 0x30
	.error "gText_Rom_23D30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D30C) < 0x30
	.space 0x30 - (. - gText_Rom_23D30C)
	.endif
