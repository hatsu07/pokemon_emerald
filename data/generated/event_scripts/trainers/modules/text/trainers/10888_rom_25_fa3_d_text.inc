	@ data/text/trainers.inc:2414 Route123_Text_VioletIntro (+1 aliases)
	.globl gText_Rom_25FA3D
gText_Rom_25FA3D: @ 0x0825FA3D
	.string "たのしい ことが あるとき って\nいい においで いっぱいに なってるのね{EOS}"
	.if (. - gText_Rom_25FA3D) > 0x26
	.error "gText_Rom_25FA3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA3D) < 0x26
	.space 0x26 - (. - gText_Rom_25FA3D)
	.endif
