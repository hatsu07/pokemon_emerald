	@ data/maps/SlateportCity/scripts.inc:1275 SlateportCity_Text_BroughtMeSomeBerryPowder
	.globl gText_Rom_1DD723
gText_Rom_1DD723: @ 0x081DD723
	.string "きのみの こなを もってきたの?$"
	.if (. - gText_Rom_1DD723) > 0x11
	.error "gText_Rom_1DD723 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD723) < 0x11
	.space 0x11 - (. - gText_Rom_1DD723)
	.endif
