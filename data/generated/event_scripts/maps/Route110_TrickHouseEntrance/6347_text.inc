	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:715 Route110_TrickHouseEntrance_Text_ConcealedInCupboard
	.globl gText_Rom_23D33C
gText_Rom_23D33C: @ 0x0823D33C
	.string "む むむ…!\pなぜ わがはいが とだなの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D33C) > 0x2e
	.error "gText_Rom_23D33C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D33C) < 0x2e
	.space 0x2e - (. - gText_Rom_23D33C)
	.endif
