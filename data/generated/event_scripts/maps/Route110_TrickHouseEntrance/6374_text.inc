	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:754 Route110_TrickHouseEntrance_Text_ThenFarewell
	.globl gText_Rom_23D620
gText_Rom_23D620: @ 0x0823D620
	.string "ソレデハ さらば!"
	.byte EOS
	.if (. - gText_Rom_23D620) > 0xa
	.error "gText_Rom_23D620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D620) < 0xa
	.space 0xa - (. - gText_Rom_23D620)
	.endif
