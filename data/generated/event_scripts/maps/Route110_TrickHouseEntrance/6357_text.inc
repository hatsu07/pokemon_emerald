	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:730 Route110_TrickHouseEntrance_Text_ItsAScroll
	.globl gText_Rom_23D478
gText_Rom_23D478: @ 0x0823D478
	.string "かけじくだ!"
	.byte EOS
	.if (. - gText_Rom_23D478) > 0x7
	.error "gText_Rom_23D478 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D478) < 0x7
	.space 0x7 - (. - gText_Rom_23D478)
	.endif
