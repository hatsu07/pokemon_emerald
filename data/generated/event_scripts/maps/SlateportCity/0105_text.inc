	@ data/maps/SlateportCity/scripts.inc:1192 SlateportCity_Text_PleaseComeWithMe
	.globl gText_Rom_1DD3E6
gText_Rom_1DD3E6: @ 0x081DD3E6
	.string "{PLAYER}{KUN}!\nいっしょに きてくれ!$"
	.if (. - gText_Rom_1DD3E6) > 0x12
	.error "gText_Rom_1DD3E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD3E6) < 0x12
	.space 0x12 - (. - gText_Rom_1DD3E6)
	.endif
